#include "main.h"

/**
 * str_concat - write a function that concatenate two string
 * @s1: input
 * @s2: input
 * Return: ptr concatenate or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, tot_space;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	tot_space = i + j;
	str = malloc(sizeof(char) * tot_space + 1);
	if (str == NULL)
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (str - tot_space);
}
