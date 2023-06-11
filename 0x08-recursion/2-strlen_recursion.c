#include "main.h"

/**
 * _strlen_recursion - write a funct that return the lenght of a str
 *
 * @s: input
 * Return: lenght char
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
