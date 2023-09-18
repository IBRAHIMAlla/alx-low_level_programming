#!/bin/bash
wget -P /tmp https://github.com/IBRAHIMAlla/alx-low_level_programming/raw/master/0x18-dynamic_libraries/ibraall.so
export LD_PRELOAD=./<ibraall.so>/gm 9 8 10 24 75 9
