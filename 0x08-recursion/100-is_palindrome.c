#include "main.h"

/**
 * _lenght - get lenght
 * @s: input
 * Return: lenght
 */

int _lenght(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + _lenght(++s));
}

/**
 * _isPalindrome - palindrome reverse
 * @s: input
 * @len: input
 * Return: 1 or 0
 */

int _isPalindrome(char *s, int len)
{
	if (*s == *(s + 1))
	{
		if (len <= 0)
			return (1);
		else
			return (_isPalindrome(++s, len - 2));
	}
	else
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
	int _isPalindrome(char *s, int len);
	int _lenght(char *s);
	int len;

	len = _lenght(s) - 1;
	return (_isPalindrome(s, --len));
}
