#include "main.h"

/**
 * print_rev - write a func that print a string, in reverse
 *
 * @s: input
 */

void print_rev(char *s)
{
	int i, j, x;

	i = 0;
	while (s[i] != '\0')
		i++;
	x = i;
	for (j = x - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
