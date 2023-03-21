#include "main.h"

/**
 *  times_table - write a func that print the 9 times table
 *
 */

void times_table(void)
{
	int r, c, d;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			d = (r * c);
			if ((d / 10) > 0)
				_putchar((d / 10) + '0');
			else
				_putchar(' ');
			_putchar((d % 10) + '0');
			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
