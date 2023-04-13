#include "main.h"

/**
 * string_nconcat - write a func that concat two str
 * @s1: input
 * @s2: input
 * @n: input
 * Return: conct or NULL if fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conct;
	unsigned int l1 = 0, l2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	else
		while (s1[l1])
			l1++;
	if (s2 == NULL)
		s2 = "";
	else
		while (s2[l2])
			l2++;
	conct = malloc((sizeof(*conct) * (l1 + l2)) + 1);
	if (conct == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		conct[i] = s1[i];
	if (n >= l2)
		for (j = 0; j < l2; j++)
			conct[j + i] = s2[j];
	else
		for (j = 0; j < n; j++)
			conct[j + i] = s2[j];
	conct[j + i] = '\0';
	return (conct);
}
