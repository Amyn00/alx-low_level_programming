#ifndef VAR_FUNC
#define VAR_FUNC

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
