#!/bin/bash

# A script that creates a static library
gcc -c *.c
ar -rc liball.a *.o
ranlib liball.a
