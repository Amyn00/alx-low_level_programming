#include "main.h"

/**
 * _strdup - write a func that return a ptr to a newly allocated space in mem,
 * which containt a copy of the str given as a param
 * @str: input
 * Return: NULL if str=NULL if sucess return ptr and NULL if insufficient mem
 * was available
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	p = malloc(sizeof(char) * i + 1);
	if (p == NULL)
		return (NULL);
	while (*str)
		*p++ = *str++;
	*p = '\0';
	return (p - i);
}
