#include "main.h"

/**
 * get_endianness - write a func that check the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int n = 1;
	char *end = (char *)&n;

	if (*end == 1)
		return (1);
	return (0);
}
