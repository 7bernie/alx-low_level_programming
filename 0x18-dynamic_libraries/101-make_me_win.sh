#!/bin/bash
gcc shared -o myprintf.so fPIC test.c
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
