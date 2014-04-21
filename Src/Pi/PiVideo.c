/*****************************************************************************
**
** Blueberry Pi
** https://github.com/Melllvar/Blueberry-Pi
**
** An MSX Emulator for Raspberry Pi based on blueMSX
**
** Copyright (C) 2003-2006 Daniel Vik
** Copyright (C) 2014 Akop Karapetyan
**
** GLES code is based on
** https://sourceforge.net/projects/atari800/ and
** https://code.google.com/p/pisnes/
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
**
******************************************************************************
*/

#include <stdlib.h>
#include <stdio.h>

#include "Properties.h"
#include "VideoRender.h"

#include <bcm_host.h>
#include <interface/vchiq_arm/vchiq_if.h>
#include <EGL/egl.h>
#include <GLES2/gl2.h>
#include <SDL.h>

typedef	struct ShaderInfo {
	GLuint program;
	GLint a_position;
	GLint a_texcoord;
	GLint u_vp_matrix;
	GLint u_texture;
} ShaderInfo;

#define	TEX_WIDTH  512
#define	TEX_HEIGHT 256

#define BIT_DEPTH       16
#define BYTES_PER_PIXEL (BIT_DEPTH >> 3)
#define ZOOM            1
#define	WIDTH           320
#define	HEIGHT          240

#define	minU 0.0f
#define	maxU ((float)WIDTH / TEX_WIDTH - minU)
#define	minV 0.0f
#define	maxV ((float)HEIGHT / TEX_HEIGHT)

extern Video *video;
extern Properties *properties;

static void drawQuad(const ShaderInfo *sh);
static GLuint createShader(GLenum type, const char *shaderSrc);
static GLuint createProgram(const char *vertexShaderSrc, const char *fragmentShaderSrc);
static void setOrtho(float m[4][4],
	float left, float right, float bottom, float top,
	float near, float far, float scaleX, float scaleY);

static EGL_DISPMANX_WINDOW_T nativeWindow;
static EGLDisplay display = NULL;
static EGLSurface surface = NULL;
static EGLContext context = NULL;

static uint32_t screenWidth = 0;
static uint32_t screenHeight = 0;

static ShaderInfo shader;
static GLuint buffers[3];
static GLuint textures[2];

static SDL_Surface *sdlScreen;

static char *msxScreen = NULL;
static int msxScreenPitch;

static const char* vertexShaderSrc =
	"uniform mat4 u_vp_matrix;\n"
	"attribute vec4 a_position;\n"
	"attribute vec2 a_texcoord;\n"
	"varying mediump vec2 v_texcoord;\n"
	"void main() {\n"
	"	v_texcoord = a_texcoord;\n"
	"	gl_Position = u_vp_matrix * a_position;\n"
	"}\n";

static const char* fragmentShaderSrc =
	"varying mediump vec2 v_texcoord;\n"
	"uniform sampler2D u_texture;\n"
	"void main() {\n"
	"	gl_FragColor = texture2D(u_texture, v_texcoord);\n"
	"}\n";

static const GLfloat uvs[] = {
	minU, minV,
	maxU, minV,
	maxU, maxV,
	minU, maxV,
};

static const GLushort indices[] = {
	0, 1, 2,
	0, 2, 3,
};

static const int kVertexCount = 4;
static const int kIndexCount = 6;

static float projection[4][4];

static const GLfloat vertices[] = {
	-0.5f, -0.5f, 0.0f,
	+0.5f, -0.5f, 0.0f,
	+0.5f, +0.5f, 0.0f,
	-0.5f, +0.5f, 0.0f,
};

int piInitVideo()
{
	bcm_host_init();

	// get an EGL display connection
	display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
	if (display == EGL_NO_DISPLAY) {
		fprintf(stderr, "eglGetDisplay() failed: EGL_NO_DISPLAY\n");
		return 0;
	}

	// initialize the EGL display connection
	EGLBoolean result = eglInitialize(display, NULL, NULL);
	if (result == EGL_FALSE) {
		fprintf(stderr, "eglInitialize() failed: EGL_FALSE\n");
		return 0;
	}

	// get an appropriate EGL frame buffer configuration
	EGLint numConfig;
	EGLConfig config;
	static const EGLint attributeList[] = {
		EGL_RED_SIZE, 8,
		EGL_GREEN_SIZE, 8,
		EGL_BLUE_SIZE, 8,
		EGL_ALPHA_SIZE, 8,
		EGL_SURFACE_TYPE, EGL_WINDOW_BIT,
		EGL_NONE
	};
	result = eglChooseConfig(display, attributeList, &config, 1, &numConfig);
	if (result == EGL_FALSE) {
		fprintf(stderr, "eglChooseConfig() failed: EGL_FALSE\n");
		return 0;
	}

	result = eglBindAPI(EGL_OPENGL_ES_API);
	if (result == EGL_FALSE) {
		fprintf(stderr, "eglBindAPI() failed: EGL_FALSE\n");
		return 0;
	}

	// create an EGL rendering context
	static const EGLint contextAttributes[] = {
		EGL_CONTEXT_CLIENT_VERSION, 2,
		EGL_NONE
	};
	context = eglCreateContext(display, config, EGL_NO_CONTEXT, contextAttributes);
	if (context == EGL_NO_CONTEXT) {
		fprintf(stderr, "eglCreateContext() failed: EGL_NO_CONTEXT\n");
		return 0;
	}

	// create an EGL window surface
	int32_t success = graphics_get_display_size(0, &screenWidth, &screenHeight);
	if (result < 0) {
		fprintf(stderr, "graphics_get_display_size() failed: < 0\n");
		return 0;
	}

	VC_RECT_T dstRect;
	dstRect.x = 0;
	dstRect.y = 0;
	dstRect.width = screenWidth;
	dstRect.height = screenHeight;

	VC_RECT_T srcRect;
	srcRect.x = 0;
	srcRect.y = 0;
	srcRect.width = screenWidth << 16;
	srcRect.height = screenHeight << 16;

	DISPMANX_DISPLAY_HANDLE_T dispManDisplay = vc_dispmanx_display_open(0);
	DISPMANX_UPDATE_HANDLE_T dispmanUpdate = vc_dispmanx_update_start(0);
	DISPMANX_ELEMENT_HANDLE_T dispmanElement = vc_dispmanx_element_add(dispmanUpdate,
		dispManDisplay, 0, &dstRect, 0, &srcRect,
		DISPMANX_PROTECTION_NONE, NULL, NULL, DISPMANX_NO_ROTATE);

	nativeWindow.element = dispmanElement;
	nativeWindow.width = screenWidth;
	nativeWindow.height = screenHeight;
	vc_dispmanx_update_submit_sync(dispmanUpdate);

	surface = eglCreateWindowSurface(display, config, &nativeWindow, NULL);
	if (surface == EGL_NO_SURFACE) {
		fprintf(stderr, "eglCreateWindowSurface() failed: EGL_NO_SURFACE\n");
		return 0;
	}

	// connect the context to the surface
	result = eglMakeCurrent(display, surface, surface, context);
	if (result == EGL_FALSE) {
		fprintf(stderr, "eglMakeCurrent() failed: EGL_FALSE\n");
		return 0;
	}

	// Init shader resources
	memset(&shader, 0, sizeof(ShaderInfo));
	shader.program = createProgram(vertexShaderSrc, fragmentShaderSrc);
	if (!shader.program) {
		fprintf(stderr, "createProgram() failed\n");
		return 0;
	}

	shader.a_position	= glGetAttribLocation(shader.program,	"a_position");
	shader.a_texcoord	= glGetAttribLocation(shader.program,	"a_texcoord");
	shader.u_vp_matrix	= glGetUniformLocation(shader.program,	"u_vp_matrix");
	shader.u_texture	= glGetUniformLocation(shader.program,	"u_texture");

	glGenTextures(1, textures);
	glBindTexture(GL_TEXTURE_2D, textures[0]);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, TEX_WIDTH, TEX_HEIGHT, 0, GL_RGB, GL_UNSIGNED_SHORT_5_6_5, NULL);

	glGenBuffers(3, buffers);
	glBindBuffer(GL_ARRAY_BUFFER, buffers[0]);
	glBufferData(GL_ARRAY_BUFFER, kVertexCount * sizeof(GLfloat) * 3, vertices, GL_STATIC_DRAW);
	glBindBuffer(GL_ARRAY_BUFFER, buffers[1]);
	glBufferData(GL_ARRAY_BUFFER, kVertexCount * sizeof(GLfloat) * 2, uvs, GL_STATIC_DRAW);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, buffers[2]);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, kIndexCount * sizeof(GL_UNSIGNED_SHORT), indices, GL_STATIC_DRAW);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glDisable(GL_DEPTH_TEST);
	glDisable(GL_DITHER);

	float sx = 1.0f;
	float sy = 1.0f;
	float zoom = (float)ZOOM;

	// Screen aspect ratio adjustment
	float a = (float)screenWidth / screenHeight;
	float a0 = (float)WIDTH / (float)HEIGHT;

	if (a > a0) {
		sx = a0/a;
	} else {
		sy = a/a0;
	}

	setOrtho(projection, -0.5f, +0.5f, +0.5f, -0.5f, -1.0f, 1.0f,
		sx * zoom, sy * zoom);

	msxScreenPitch = WIDTH * BIT_DEPTH / 8;
	msxScreen = (char*)calloc(1, BIT_DEPTH / 8 * TEX_WIDTH * TEX_HEIGHT);
	if (!msxScreen) {
		return 0;
	}

	// We're doing our own video rendering - this is just so SDL-based keyboard
	// can work
	sdlScreen = SDL_SetVideoMode(0, 0, 32, SDL_SWSURFACE);

	return 1;
}

void piDestroyVideo()
{
	if (sdlScreen) {
		SDL_FreeSurface(sdlScreen);
	}
	if (msxScreen) {
		free(msxScreen);
	}

	// Destroy shader resources
	if (shader.program) {
		glDeleteProgram(shader.program);
		glDeleteBuffers(3, buffers);
		glDeleteTextures(1, textures);
	}

	// Release OpenGL resources
	eglMakeCurrent(display, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
	eglDestroySurface(display, surface);
	eglDestroyContext(display, context);
	eglTerminate(display);

	bcm_host_deinit();
}

void piUpdateEmuDisplay()
{
	if (!shader.program) {
		fprintf(stderr, "Shader not initialized\n");
		return;
	}

	glClear(GL_COLOR_BUFFER_BIT);
	glViewport(0, 0, screenWidth, screenHeight);

	ShaderInfo *sh = &shader;

	glDisable(GL_BLEND);
	glUseProgram(sh->program);
	glUniformMatrix4fv(sh->u_vp_matrix, 1, GL_FALSE, &projection[0][0]);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, textures[0]);

	FrameBuffer* frameBuffer;
	frameBuffer = frameBufferFlipViewFrame(properties->emulation.syncMethod == P_EMU_SYNCTOVBLANKASYNC);
	if (frameBuffer == NULL) {
		frameBuffer = frameBufferGetWhiteNoiseFrame();
	}
	int borderWidth = ((320 - frameBuffer->maxWidth) * ZOOM) >> 1;

	videoRender(video, frameBuffer, BIT_DEPTH, 1,
				msxScreen + borderWidth * BYTES_PER_PIXEL, 0, msxScreenPitch, -1);

	// if (borderWidth > 0) {
	// 	int h = height;
	// 	while (h--) {
	// 		memset(dpyData, 0, borderWidth * BYTES_PER_PIXEL);
	// 		memset(dpyData + (width - borderWidth) * BYTES_PER_PIXEL, 0, borderWidth * BYTES_PER_PIXEL);
	// 		dpyData += msxScreenPitch;
	// 	}
	// }

	glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, WIDTH, HEIGHT,
					GL_RGB, GL_UNSIGNED_SHORT_5_6_5, msxScreen);

	drawQuad(sh);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

	eglSwapBuffers(display, surface);
}

static GLuint createShader(GLenum type, const char *shaderSrc)
{
	GLuint shader = glCreateShader(type);
	if (!shader) {
		fprintf(stderr, "glCreateShader() failed: %d\n", glGetError());
		return 0;
	}

	// Load and compile the shader source
	glShaderSource(shader, 1, &shaderSrc, NULL);
	glCompileShader(shader);

	// Check the compile status
	GLint compiled = 0;
	glGetShaderiv(shader, GL_COMPILE_STATUS, &compiled);
	if (!compiled) {
		GLint infoLen = 0;
		glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &infoLen);
		if (infoLen > 1) {
			char* infoLog = (char *)malloc(sizeof(char) * infoLen);
			glGetShaderInfoLog(shader, infoLen, NULL, infoLog);
			fprintf(stderr, "Error compiling shader:\n%s\n", infoLog);
			free(infoLog);
		}

		glDeleteShader(shader);
		return 0;
	}

	return shader;
}

static GLuint createProgram(const char *vertexShaderSrc, const char *fragmentShaderSrc)
{
	GLuint vertexShader = createShader(GL_VERTEX_SHADER, vertexShaderSrc);
	if (!vertexShader) {
		fprintf(stderr, "createShader(GL_VERTEX_SHADER) failed\n");
		return 0;
	}

	GLuint fragmentShader = createShader(GL_FRAGMENT_SHADER, fragmentShaderSrc);
	if (!fragmentShader) {
		fprintf(stderr, "createShader(GL_FRAGMENT_SHADER) failed\n");
		glDeleteShader(vertexShader);
		return 0;
	}

	GLuint programObject = glCreateProgram();
	if (!programObject) {
		fprintf(stderr, "glCreateProgram() failed: %d\n", glGetError());
		return 0;
	}

	glAttachShader(programObject, vertexShader);
	glAttachShader(programObject, fragmentShader);

	// Link the program
	glLinkProgram(programObject);

	// Check the link status
	GLint linked = 0;
	glGetProgramiv(programObject, GL_LINK_STATUS, &linked);
	if (!linked) {
		GLint infoLen = 0;
		glGetProgramiv(programObject, GL_INFO_LOG_LENGTH, &infoLen);
		if (infoLen > 1) {
			char* infoLog = (char *)malloc(infoLen);
			glGetProgramInfoLog(programObject, infoLen, NULL, infoLog);
			fprintf(stderr, "Error linking program: %s\n", infoLog);
			free(infoLog);
		}

		glDeleteProgram(programObject);
		return 0;
	}

	// Delete these here because they are attached to the program object.
	glDeleteShader(vertexShader);
	glDeleteShader(fragmentShader);

	return programObject;
}

static void setOrtho(float m[4][4],
	float left, float right, float bottom, float top,
	float near, float far, float scaleX, float scaleY)
{
	memset(m, 0, 4 * 4 * sizeof(float));
	m[0][0] = 2.0f / (right - left) * scaleX;
	m[1][1] = 2.0f / (top - bottom) * scaleY;
	m[2][2] = -2.0f / (far - near);
	m[3][0] = -(right + left) / (right - left);
	m[3][1] = -(top + bottom) / (top - bottom);
	m[3][2] = -(far + near) / (far - near);
	m[3][3] = 1;
}

static void drawQuad(const ShaderInfo *sh)
{
	glUniform1i(sh->u_texture, 0);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

	glBindBuffer(GL_ARRAY_BUFFER, buffers[0]);
	glVertexAttribPointer(sh->a_position, 3, GL_FLOAT,
		GL_FALSE, 3 * sizeof(GLfloat), NULL);
	glEnableVertexAttribArray(sh->a_position);

	glBindBuffer(GL_ARRAY_BUFFER, buffers[1]);
	glVertexAttribPointer(sh->a_texcoord, 2, GL_FLOAT,
		GL_FALSE, 2 * sizeof(GLfloat), NULL);
	glEnableVertexAttribArray(sh->a_texcoord);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, buffers[2]);

	glDrawElements(GL_TRIANGLES, kIndexCount, GL_UNSIGNED_SHORT, 0);
}
