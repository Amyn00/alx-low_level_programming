#include "main.h"

/**
 * print_diagonal - write a func that draws a diagonal line
 *
 * @n: input
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 1; j <= i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
