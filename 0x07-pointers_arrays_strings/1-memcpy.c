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
	char *p_src = src;
	char *p_dest = dest;

	while (n-- > 0)
		*p_dest++ = *p_src++;


	return (dest);
}
