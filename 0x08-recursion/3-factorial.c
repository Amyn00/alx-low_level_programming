#include "main.h"

/**
 * factorial - write a func that returns the fact of given num
 * @n: input
 * Return: -1 if n is lower than 0 and 1 if equal to 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
