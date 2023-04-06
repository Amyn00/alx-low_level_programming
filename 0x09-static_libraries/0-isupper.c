#include "main.h"
#include <ctype.h>

/**
 * _isupper - write a func that checks for upper char
 *
 * @c: inpute
 *
 * Return: 1 if c is uppercase, 0 if otherwise
 *
 */

int _isupper(int c)
{
	if (isupper((char) c))
		return (1);
	else
		return (0);
}
