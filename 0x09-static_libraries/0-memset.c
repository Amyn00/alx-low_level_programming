#include "main.h"

/**
 * _memset - write a func that fills memory with a const byte
 *
 * @s: input
 * @b: input
 * @n: input
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
		*p++ = b;

	return (s);
}
