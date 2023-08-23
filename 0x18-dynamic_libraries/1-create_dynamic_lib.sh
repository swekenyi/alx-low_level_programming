#!/bin/bash
gcc -shared -fPIC -o liball.so *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
