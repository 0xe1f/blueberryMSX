/*****************************************************************************
**
** blueberryMSX
** https://github.com/0xe1f/blueberryMSX
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
#include "rgbserver.h"

#include <SDL.h>

#define	WIDTH           320
#define	HEIGHT          240
#define BIT_DEPTH       16
#define BYTES_PER_PIXEL (BIT_DEPTH >> 3)
#define ZOOM            1
#define	WIDTH           320
#define	HEIGHT          240

extern Video *video;
extern Properties *properties;

uint32_t screenWidth = 0;
uint32_t screenHeight = 0;

static SDL_Surface *sdlScreen;

static char *msxScreen = NULL;
static int msxScreenPitch;

int piInitVideo()
{
    fprintf(stderr, "Setting up screen...\n");

    msxScreenPitch = WIDTH * BIT_DEPTH / 8;
    msxScreen = (char*)calloc(1, BIT_DEPTH / 8 * WIDTH * HEIGHT);
    if (!msxScreen) {
        fprintf(stderr, "Error allocating screen texture\n");
        return 0;
    }

    // Set up rgbserver
    int bpp = BYTES_PER_PIXEL;
    struct FrameGeometry data = {
        WIDTH * HEIGHT * bpp,
        WIDTH * bpp,
        WIDTH,
        HEIGHT,
        PIXEL_FORMAT_RGB565,
        0,
        MAGIC_NUMBER
    };
    rgbs_set_buffer_data(data);
    rgbs_start();

    fprintf(stderr, "Initializing SDL video...\n");
    // We're doing our own video rendering - this is just so SDL-based keyboard
    // can work
    sdlScreen = SDL_SetVideoMode(0, 0, 0, 0);

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

    // Shut down rgbserver
    rgbs_end();
}

void piUpdateEmuDisplay()
{
    FrameBuffer* frameBuffer;
    frameBuffer = frameBufferFlipViewFrame(properties->emulation.syncMethod == P_EMU_SYNCTOVBLANKASYNC);
    if (frameBuffer == NULL) {
        frameBuffer = frameBufferGetWhiteNoiseFrame();
    }
    int borderWidth = ((320 - frameBuffer->maxWidth) * ZOOM) >> 1;

    videoRender(video, frameBuffer, BIT_DEPTH, 1,
                msxScreen + borderWidth * BYTES_PER_PIXEL, 0, msxScreenPitch, -1);

    rgbs_poll();
    rgbs_send(msxScreen, msxScreenPitch * HEIGHT);
}
