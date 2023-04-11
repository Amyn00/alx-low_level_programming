#include "main.h"

/**
 * create_array - write a func that creates an array of char, and
 * init it with a specific char
 * @size: size of array
 * @c: input char
 * Return: NULL if size = 0 or ptr to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(p + i) = c;
	*(p + i) = '\0';
	return (p);
}
