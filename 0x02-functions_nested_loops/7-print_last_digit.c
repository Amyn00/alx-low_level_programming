#include "main.h"

/**
 * print_last_digit - write a func that print the last digit
 * of a num
 * @n: one number
 *
 * Return: num
 */

int print_last_digit(int n)
{
	int num;

	num = n % 10;

	if (num < 0)
		num = (-1 * num);
	_putchar(num + '0');

	return (num);
}
