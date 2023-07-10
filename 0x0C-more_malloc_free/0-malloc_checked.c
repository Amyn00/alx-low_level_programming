#include "main.h"

/**
 * malloc_checked - write a func that allocates mem using malloc
 * @b: input
 * Return: p
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b * sizeof(char));
	if (p == NULL)
		exit(98);
	return (p);
}
