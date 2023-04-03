#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - write a func that searches a string for any of a set
 * of bytes
 *
 * @s: input
 * @accept: input
 *
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	char *p = s;

	while (*p != '\0')
	{
		char *q = accept;

		while (*q != '\0')
		{
			if (*p == *q)
				return (p);
			q++;
		}
		p++;
	}
	return (NULL);
}
