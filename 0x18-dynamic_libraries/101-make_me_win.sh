#!/bin/bash
wget -P /tmp/ https://raw.github.com/IBRAHIMAlla/alx-low_level_programming/master/0x18-dynamic_libraries/ibraall.so
export LD_PRELOAD=/tmp/ibraall.so
