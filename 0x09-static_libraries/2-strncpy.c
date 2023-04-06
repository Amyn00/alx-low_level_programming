#include "main.h"
#include <string.h>

/**
 * _strncpy - write a funct that copie a str
 * @dest: input 1
 * @src: input 2
 * @n: input 3
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);
	for ( ; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
