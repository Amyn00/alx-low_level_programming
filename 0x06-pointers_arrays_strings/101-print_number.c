#include "main.h"

/**
 * print_number - write a func that print an int
 *
 * @n: input
 */

void print_number(int n)
{
	int tmp, cpt = 0;
	
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		_putchar('-');
		tmp = -1 * n;
	}
	else
		tmp = n;

	while (n != 0)
	{
		n = n / 10;
		cpt++;
	}
	switch (cpt)
	{
		case 1:
			_putchar((tmp % 10) + '0');
			break;
		case 2:
			_putchar((tmp / 10) + '0');
			_putchar((tmp % 10) + '0');
			break;
		case 3:
			_putchar((tmp / 100) + '0');
			_putchar(((tmp % 100) / 10) + '0');
			_putchar((tmp % 10) + '0');
			break;
		case 4:
			_putchar((tmp / 1000) + '0');
			_putchar(((tmp % 1000) / 100) + '0');
			_putchar(((tmp % 100) / 10) + '0');
			_putchar((tmp % 10) + '0');
			break;
		default:
			break;
	}
}
