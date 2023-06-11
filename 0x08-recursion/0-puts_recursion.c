#include "main.h"

/**
 * _puts_recursion - write a func that print a str followed by new line
 * @s: input
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
