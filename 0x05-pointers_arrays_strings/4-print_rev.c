#include "main.h"
#include <string.h>

/**
 * print_rev - write a func that print a string, in reverse
 *
 * @s: input
 */

void print_rev(char *s)
{
	int i, j;

	j = strlen(s);
	for (i = j; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
