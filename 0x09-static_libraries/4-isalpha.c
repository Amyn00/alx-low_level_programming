#include <ctype.h>
#include "main.h"

/**
 * _isalpha - write a func that check for alphabet char
 *
 * @c: single letter input
 *
 * Return: 1 if c is a lettre,low or upper, 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha((char) c))
		return (1);
	else
		return (0);
}
