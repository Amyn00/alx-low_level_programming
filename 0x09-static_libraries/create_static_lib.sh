#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c 
ar -rcs liball.a *.o
