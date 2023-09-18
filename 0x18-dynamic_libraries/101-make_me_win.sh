#!/bin/bash
wget https://github.com/IBRAHIMAlla/alx-low_level_programming/raw/master/0x18-dynamic_libraries/ibraall.so -P/tmp/
export LD_PRELOAD=/tmp/ibraall.so
