#include "main.h"

/**
 * _sqrt - sqrt funct
 * @x: input
 * @y: input
 * Return: n
 */

int _sqrt(int x, int y)
{
	if (x == y * y)
		return (y);
	else if (y < x)
		return (_sqrt(x, y + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - write a func that returns the
 * natural square root of a num
 *
 * @n: input
 * Return: -1 if n doesn't have a natural sqrt root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
