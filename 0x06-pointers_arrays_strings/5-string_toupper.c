#include "main.h"
#include <ctype.h>

/**
 * string_toupper - write a func that change all low to upper
 * @s: input
 * Return: s
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		s[i] = toupper(s[i]);
		i++;
	}
	return (s);
}
