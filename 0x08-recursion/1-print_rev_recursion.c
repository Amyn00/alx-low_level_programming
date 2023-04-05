#include "main.h"

/**
 * _print_rev_recursion - write a func that print a string in reverse
 * @s: input
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
