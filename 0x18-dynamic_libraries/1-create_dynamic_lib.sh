#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
nm -D liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
