#ifndef _STRUCTS
#define _STRUCTS

#ifdef __cplusplus
extern "C" {
#endif

struct FrameGeometry {
    unsigned int buffer_size;
    unsigned short bitmap_pitch;
    unsigned short bitmap_width;
    unsigned short bitmap_height;
    unsigned char pixel_format;
    unsigned char attrs;
    unsigned int magic;
};

#ifdef __cplusplus
} // End of extern "C"
#endif

#define MAGIC_NUMBER 0xd34db33f

#define PIXEL_FORMAT_UNKNOWN  0
#define PIXEL_FORMAT_RGB565   1
#define PIXEL_FORMAT_RGBA8888 2
#define PIXEL_FORMAT_RGBA5551 3
#define PIXEL_FORMAT_ARGB8888 4

#define ATTR_ROT180 0x01

#endif // _STRUCTS
