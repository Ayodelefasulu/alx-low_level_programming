#!/bin/bash
gcc -fPIC -shared -o liball.so $(ls *.c | grep -v -e '0-main.c' -e 'tests.c')
