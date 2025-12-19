#ifndef _RGBSERVER
#define _RGBSERVER

#include "rgbcommon.h"

#ifdef __cplusplus
extern "C" {
#endif

int rgbs_poll();
int rgbs_start();
void rgbs_end();
void rgbs_set_buffer_data(struct FrameGeometry src);
int rgbs_send(const unsigned char *buffer, int size);

#ifdef __cplusplus
} // End of extern "C"
#endif

#endif // _RGBSERVER
