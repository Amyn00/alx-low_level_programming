#include "main.h"

/**
 * _calloc - write a func that alloc mem for an array
 * @nmemb: input
 * @size: input
 * Return: p
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	memset(p, 0, (nmemb * size));
	return (p);
}
