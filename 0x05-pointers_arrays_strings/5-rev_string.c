#include "main.h"

/**
 * rev_string - writea func that reverse a string
 *
 * @s: input
 */

void rev_string(char *s)
{
	int i, j, k;
	char str;

	i = 0;
	k = 0;
	while (s[i] != '\0')
		i++;
	k = i - 1;
	for (j = 0; j < i / 2; j++)
	{
		str = s[j];
		s[j] = s[k];
		s[k--] = str;
	}
}
