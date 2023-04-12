#include "main.h"

/**
 * strtow - write a func that split a str into words
 * @str: input
 * Return: s
 */

char **strtow(char *str)
{
	char **s;
	int i = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;
		letters = word_len(str + i);
		s[w] = malloc(sizeof(char) * (letters + 1));
		if (s[w] == NULL)
		{
			for (; w >= 0; w--)
				free(s[w]);
			free(s);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			s[w][l] = str[i++];
		s[w][l] = '\0';
	}
	s[w] = NULL;
	return (s);
}
