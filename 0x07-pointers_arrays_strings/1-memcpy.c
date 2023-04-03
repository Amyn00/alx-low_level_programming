#include "main.h"

/**
 * _memcpy - write a func that copies memory area
 *
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *psrc = src;
	char *pdest = dest;

	while (n-- > 0)
		*psrc++ = *pdest++;


	return (dest);
}
