#include "main.h"

/**
 * binary_to_uint - write a func that convert a binary num to an unsnd int
 * @b: input
 * Return: the converted num , or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	if (b == NULL)
		return (0);
	num = 0;
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		       return (0);
		num *= 2;
		if (b[i] == '1')
			num++;
	}
	return (num);
}