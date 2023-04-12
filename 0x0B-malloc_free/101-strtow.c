#include "main.h"
/**
 * strtow - write a func that split a str into words
 * @str: input
 * Return: nstr
 */
char **strtow(char *str)
{
	int i = 0, j = 0, x = 0, k, c, m, wf;
	char **nstr, *n_str;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && (str[i + 1] != ' ' || str[i + 1] == '\0'))
			x++;
		else if (i == 0)
			x++;
	}
	x++;
	if (x == 1)
		return (NULL);
	nstr = (char **)malloc(sizeof(char *) * x);
	if (nstr == NULL)
		return (NULL);
	for (wf = 0; str[wf] && j <= x; wf++)
	{
		c = 0;
		if (str[wf] != ' ')
		{
			for (i = wf; str[i] != '\0'; i++)
			{
				if (str[i] == ' ')
					break;
				c++;
			}
			*(nstr + j) = (char *)malloc(c + 1 * sizeof(char));
			if (*(nstr + j) == NULL)
			{
				for (k = 0; k <= j; k++)
				{
					n_str = nstr[k];
					free(n_str);
				}
				free(nstr);
				return (NULL);
			}
			for (m = 0; wf < i; wf++)
			{
				nstr[j][m] = str[wf];
				m++;
			}
			nstr[j][m] = '\0';
			j++;
		}
	}
	nstr[j] = NULL;
	return (nstr);
}
