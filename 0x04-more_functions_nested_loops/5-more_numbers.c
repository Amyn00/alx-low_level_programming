#include "main.h"

/**
 * more_numbers - write a func that print num from 0 to 14
 *
 */

void more_numbers(void)
{
	int i, j, units, tens;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			units = j % 10;
			tens = j / 10;
			if (j > 9)
				_putchar(tens + '0');
			_putchar(units + '0');
		}
		_putchar('\n');
	}
}
