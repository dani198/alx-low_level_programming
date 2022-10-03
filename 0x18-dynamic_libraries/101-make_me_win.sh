#!/bin/bash
gcc *.o -shared -o libgiga.so
LD_PRELOAD=$PWD/libgiga.so
