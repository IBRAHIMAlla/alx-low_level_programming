#!/bin/bash
wget -P /tmp https://github.com/IBRAHIMAlla/alx-low_level_programming/raw/master/0x18-dynamic_libraries/all.so
export LD_PRELOAD=/tmp/all.so
