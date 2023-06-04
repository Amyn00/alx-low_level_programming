#include "main.h"

/**
 * print_sign - write that print the sign of a num
 * @n: print one number
 * Return: 1 and print + if n greath than zero,
 * 0 and print 0 if n is zero,
 * -1 and print - if n is less than zero
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
