#include "main.h"

/**
 * string_nconcat - concat two string
 * @s1: input
 * @s2: input
 * @n: input
 * Return: conct
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, i, x;
	char *conct;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = 0;
	while (s1[l1])
		l1++;
	conct = malloc(sizeof(*conct) * l1 + n + 1);
	if (conct == NULL)
		return (NULL);
	for (i = 0, x = 0; i < (l1 + n); i++)
	{
		if (i < l1)
			conct[i] = s1[i];
		else
			conct[i] = s2[x++];
	}
	conct[i] = '\0';
	return (conct);
}
