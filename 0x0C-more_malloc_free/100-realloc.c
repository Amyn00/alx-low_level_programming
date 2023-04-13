#include "main.h"

/**
 * _realloc - write a func that reallocates a memory block using malloc & free
 * @ptr: input
 * @old_size: input
 * @new_size: input
 * Return: new size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return ((void *)malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		nptr[i] = (*(int *)ptr + i);
	free(ptr);
	return ((void *)nptr);
}
