#include "main.h"

/**
 * _lenght - get lenght
 * @s: input
 * Return: lenght
 */

int _lenght(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _lenght(s + 1));
}

/**
 * _isPalindrome - palindrome reverse
 * @s: input
 * @x1: input
 * @x2: input
 * Return: 1 or 0
 */

int _isPalindrome(char *s, int x1, int x2)
{
	if (*(s + x1) == *(s + x2))
	{
		if (x1 == x2 || x1 == x2 + 1)
			return (1);
		return (0 + _isPalindrome(s, x1 + 1, x2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - write a func that return 1 if a string
 * is a palindrome and 0 if not
 * @s: input
 * Return: 1 if is a palindrome 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_isPalindrome(s, 0, _lenght(s) - 1));
}
