#include "main.h"

/**
 * print_alphabet - write a function that print
 * the alphabet
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar((char) i);
	_putchar('\n');
}
