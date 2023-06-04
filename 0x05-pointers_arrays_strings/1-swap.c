#include "main.h"

/**
 * swap_int - write a func that swap the value of two ints
 *
 * @a: input as pointeur a
 * @b: input as pointeur b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
