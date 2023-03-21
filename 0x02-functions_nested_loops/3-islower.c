#include <ctype.h>
#include "main.h"

/**
 * _islower - write a function that check for lowercase char
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (islower((char) c))
		return (1);
	else
		return (0);
}
