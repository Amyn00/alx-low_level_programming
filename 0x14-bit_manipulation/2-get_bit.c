#include "main.h"

/**
 * get_bit - write a func that return the val of a bit at given index
 * @n: input
 * @index: input
 * Return: the value of the bit at index or -1 if an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
