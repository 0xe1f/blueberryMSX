#!/bin/bash

cd `dirname $(readlink -f $0)`

ROM=$1
shift

sleep 1
TERM=vt220 ./bluemsx -rom1 roms/$ROM.rom $@ >> log.txt 2>&1
