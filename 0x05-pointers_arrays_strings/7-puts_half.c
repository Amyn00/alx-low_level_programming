#include "main.h"

/**
 * puts_half - write a func that print half of string
 *
 * @str: input
 */

void puts_half(char *str)
{
	int len, i, n;

	len = 0;
	while (str[len] != '\0')
		len++;
	if ((len % 2) == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
			_putchar(str[n + 1]);
	}
	_putchar('\n');
}
