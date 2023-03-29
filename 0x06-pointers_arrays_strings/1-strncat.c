#include "main.h"
#include <string.h>

/**
 * _strncat - write a func that concat two str
 * @dest: input 1
 * @src: input 2
 * @n: input 3
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int lengthD, lengthS;

	lengthD = 0;
	lengthS = 0;

	while (*(dest + lengthD) != '\0')
		lengthD++;

	while (*(src + lengthS) != '\0' && lengthD < 97 && lengthS < n)
	{
		*(dest + lengthD) = *(src + lengthS);
		lengthD++;
		lengthS++;
	}
	*(dest + lengthD) = '\0';
	return (dest);
}
