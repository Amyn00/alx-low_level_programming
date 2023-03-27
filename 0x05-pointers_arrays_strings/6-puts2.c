#include "main.h"

/**
 * puts2 - write a func that prints every other char of a string
 *
 * @str: input
 */

void puts2(char *str)
{
	int len, j;

	len = 0;
	while (str[len] != '\0')
		len++;
	for (j = 0; j < len; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}
