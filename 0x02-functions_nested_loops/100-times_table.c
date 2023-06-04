#include "main.h"

/**
 * print_times_table - write a func that print the n times table
 * staring with 0
 *
 * @n: number
 */

void print_times_table(int n)
{
	int r, c, d;

	if (n >= 0 && n <= 15)
	{
		for (r = 0; r <= n; r++)
		{
			_putchar('0');
			for (c = 1; c <= n; c++)
			{
				_putchar(',');
				_putchar(' ');
				d = (r * c);
				if (d <= 9)
					_putchar(' ');
				if (d <= 99)
					_putchar(' ');
				if (d >= 100)
				{
					_putchar((d / 100) + '0');
					_putchar((d / 10) % 10 + '0');
				}
				else if (d <= 99 && d >= 10)
					_putchar((d / 10) + '0');
				_putchar((d % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
