/*****************************************************************************
** $Source: /cygdrive/d/Private/_SVNROOT/bluemsx/blueMSX/Src/Sdl/SdlFile.c,v $
**
** $Revision: 1.5 $
**
** $Date: 2008-03-31 19:42:23 $
**
** More info: http://www.bluemsx.com
**
** Copyright (C) 2003-2006 Daniel Vik
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
#include "ArchFile.h"

#include <stdlib.h>

#ifdef WINDOWS_HOST

#include <windows.h>
#include <direct.h>
#include <shlobj.h> 
#include <shlwapi.h>

const char* archGetCurrentDirectory()
{
    static char pathname[512];
    GetCurrentDirectory(512, pathname);
    return pathname;
}

int archCreateDirectory(const char* pathname)
{
    return mkdir(pathname);
}

void archSetCurrentDirectory(const char* pathname)
{
    SetCurrentDirectory(pathname);
}

int archFileExists(const char* fileName)
{
    return PathFileExists(fileName);
}

int archFileDelete(const char* fileName)
{
    return DeleteFile(fileName);
}

#else

#include <sys/stat.h>
#include <unistd.h>


int archCreateDirectory(const char* pathname)
{
    return mkdir(pathname, 0777);
}

const char* archGetCurrentDirectory()
{
    static char buf[512];
    return getcwd(buf, sizeof(buf));
}

void archSetCurrentDirectory(const char* pathname)
{
    chdir(pathname);
}

int archFileExists(const char* fileName)
{
    struct stat s;
    return stat(fileName, &s) == 0;
}

int archFileDelete(const char* fileName)
{
    return remove(fileName) == 0;
}

#endif

/* File dialogs: */
char* archFilenameGetOpenRom(Properties* properties, int cartSlot, RomType* romType) { return NULL; }
char* archFilenameGetOpenDisk(Properties* properties, int drive, int allowCreate) { return NULL; }
char* archFilenameGetOpenHarddisk(Properties* properties, int drive, int allowCreate) { return NULL; }
char* archFilenameGetOpenCas(Properties* properties) { return NULL; }
char* archFilenameGetSaveCas(Properties* properties, int* type) { return NULL; }
char* archFilenameGetOpenState(Properties* properties) { return NULL; }
char* archFilenameGetOpenCapture(Properties* properties) { return NULL; }
char* archFilenameGetSaveState(Properties* properties) { return NULL; }
char* archDirnameGetOpenDisk(Properties* properties, int drive) { return NULL; }
char* archFilenameGetOpenRomZip(Properties* properties, int cartSlot, const char* fname, const char* fileList, int count, int* autostart, int* romType) { return NULL; }
char* archFilenameGetOpenDiskZip(Properties* properties, int drive, const char* fname, const char* fileList, int count, int* autostart) { return NULL; }
char* archFilenameGetOpenCasZip(Properties* properties, const char* fname, const char* fileList, int count, int* autostart) { return NULL; }
char* archFilenameGetOpenAnyZip(Properties* properties, const char* fname, const char* fileList, int count, int* autostart, int* romType) { return NULL; }

