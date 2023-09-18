#!/bin/bash
gcc -Wall -Wextra -werror -pedantic -c -fPIC *.c
gcc *.o -shared -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
