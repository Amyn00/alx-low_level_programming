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
	unsigned int i, j, x;

	if (s1 == NULL)
		s1 = "";
	else
		while (s1[i])
			i++;
	if (s2 == NULL)
		s2 = "";
	else
		while (s2[j])
			j++;
	conct = malloc(sizeof(char) * (j + i));
	if (conct == NULL)
		return (NULL);
	for (x = 0; x < i; x++)
		conct[x] = s1[x];
	if (n >= j)
		for (x = 0; x < j; x++)
			conct[x + i] = s2[x];
	else
		for (x = 0; x < n; x++)
			conct[x + i] = s2[x];
	conct[x + i] = '\0';
	return (conct);

}
