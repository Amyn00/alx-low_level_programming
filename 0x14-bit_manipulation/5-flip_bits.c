#include "main.h"
/**
 * flip_bits - write a func that return the num of bits you would need to flip
 * to get from one num to another
 * @n: input
 * @m: input
 * Return: the num of bit you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, b = 0;

	while (x > 0)
	{
		b += (x & 1);
		x >>= 1;
	}
	return (b);
}
