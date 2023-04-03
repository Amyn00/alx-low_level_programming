#include "main.h"

/**
 * _strspn - write a func that gets the lenght of a prefix substr
 *
 * @s: input
 * @accept: input
 *
 * Return: cpt
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int cpt = 0;
	char *p;

	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*s == *p)
			{
				cpt++;
				break;
			}
			p++;
		}
		if (*p == '\0')
			break;
		s++;
	}

	return (cpt);
}
