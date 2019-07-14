#!/bin/bash
gcc-4.8 -c *.c
ar rc liball.a $(ls *.o)
