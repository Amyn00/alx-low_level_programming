#include "main.h"

/**
 * argstostr - write a func that concat all the arguments of your prog
 * @ac: input
 * @av: input
 * Return: ptr or NULL if ac=0 or av=0 or if it fails
 */

char *argstostr(int ac, char **av)
{
	char *p_av;
	int i, j, x = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
	}
	p_av = (char *)malloc(sizeof(char) * len + ac + 1);
	if (p_av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			*(p_av + x++) = av[i][j++];
		*(p_av + x++) = '\n';
	}
	return (p_av);

}
