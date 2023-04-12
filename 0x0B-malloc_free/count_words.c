#include "main.h"

/**
 * count_words - number of words
 * @str: input
 * Return: w
 */

int count_words(char *str)
{
	int i = 0, w = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;
	for (i = 0; i < len; i++)
		if (*(str + i) != ' ')
		{
			w++;
			i += word_len(str + i);
		}
	return (w);
}
