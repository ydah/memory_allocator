#!/bin/bash
rm -f sample.bin
gcc sample.c ../src/memory.c -I../src/ -Wall -Wextra -O0 -o sample.bin
