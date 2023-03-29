#include "main.h"
#include <ctype.h>

/**
 * cap_string - write a func that capitalize all words of a str
 *
 * @s: input
 * Return: s
 */

char *cap_string(char *s)
{
	int i, j;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40,
		41, 123, 125};
	i = 0;

	while (s[i])
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == a[j])
				s[i + 1] = toupper(s[i + 1]);
		}
		i++;
	}
	return (s);
}
