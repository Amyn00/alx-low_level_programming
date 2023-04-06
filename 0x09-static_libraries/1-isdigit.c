#include "main.h"
#include <ctype.h>

/**
 * _isdigit - write a func that checks for a digit
 *
 * @c: input
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
