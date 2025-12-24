#!/bin/bash

cd `dirname $(readlink -f $0)`

ROM=$1
shift

LAUNCH=""
if [ -f roms/$ROM.rom ]; then
    LAUNCH="-rom1 roms/$ROM.rom"
elif [ -f roms/$ROM.dsk ]; then
    LAUNCH="-diskA roms/$ROM.dsk"
elif [ -f roms/$ROM.cas ]; then
    LAUNCH="-cas roms/$ROM.cas"
else
    echo "No ROM or disk image found for $ROM" >&2
    exit 1
fi

sleep 1
echo "Launching TERM=vt220 ./bluemsx $LAUNCH $@" >> log.txt 2>&1
TERM=vt220 ./bluemsx $LAUNCH $@ >> log.txt 2>&1
