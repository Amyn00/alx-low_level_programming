#include "main.h"

/**
 * print_line - write a func that draws a straight line
 *
 * @n: number of _
 *
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
