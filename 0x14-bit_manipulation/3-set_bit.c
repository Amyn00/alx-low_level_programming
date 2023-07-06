#include "main.h"

/**
 * set_bit - write a func that set the val of bit to 1 at a given index
 * @n: input
 * @index: input
 * Return: 1 if it worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
