#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar rsc liball.a *.o
