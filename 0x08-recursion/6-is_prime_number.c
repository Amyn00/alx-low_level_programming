#include "main.h"

/**
 * _isPN - prime number
 * @x: input
 * @y: input
 * Return: x
 */
int _isPN(int x, int y)
{
	if (y < x)
	{
		if (x % y == 0)
			return (0);
		else
			return (_isPN(x, y + 1));
	}
	else
		return (1);
}

/**
 * is_prime_number - write a func that return 1 if the
 * input int is a prime num otherwise return 0
 *
 * @n: input
 * Return: 1 if the input PN, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n % n == 0 || n % 1 == 0)
	{
		if (_isPN(n, 2) != 0)
			return (1);
		else
			return (0);
	}
}
