#include "main.h"

/**
 * print_alphabet_x10 - write a fun that print 10 times alphabt
 */

void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 97; y < 123; y++)
			_putchar((char) y);
		_putchar('\n');
	}
}
