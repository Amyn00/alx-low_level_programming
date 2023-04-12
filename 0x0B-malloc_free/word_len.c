#include "main.h"

/**
 * word_len - the lenght of words
 * @str: input
 * Return: len
 */

int word_len(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}
