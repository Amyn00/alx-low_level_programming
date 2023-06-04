#include "main.h"
#include <ctype.h>

/**
 * rot13 - write a func that encode a str using rot13
 *
 * @s: input
 * Return: s
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (isalpha(s[i]))
		{
			s[i] = islower(s[i]) ?
				(((s[i] - 'a') + 13) % 26) + 'a'
				: s[i];
			s[i] = isupper(s[i]) ?
				(((s[i] - 'A') + 13) % 26) + 'A'
				: s[i];
		}
		i++;
	}

	return (s);
}
