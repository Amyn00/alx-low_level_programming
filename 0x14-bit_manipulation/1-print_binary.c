#include "main.h"

/**
 * print_binary - write a func that print the binary rep of a num
 * @n: input
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
