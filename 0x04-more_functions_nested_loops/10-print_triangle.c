#include "main.h"

/**
 * print_triangle - write a func that print a triangle
 *
 * @size: input
 */

void print_triangle(int size)
{
	int i, j, nbspace;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		nbspace = size - i;
		for (j = 1; j <= nbspace; j++)
			_putchar(' ');
		for (j = 1; j <= i; j++)
			_putchar('#');
		_putchar('\n');
	}
}
