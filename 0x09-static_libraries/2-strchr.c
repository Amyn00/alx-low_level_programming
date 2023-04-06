#include "main.h"
#include <stddef.h>

/**
 * _strchr - write a func that locates a char in a str
 *
 * @s: input
 * @c: input
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
