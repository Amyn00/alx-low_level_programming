#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase except
 * Return: 0 (success)
 */

int main(void)
{
	int low = 97;

	while (low < 123)
	{
		if (low != 101 && low != 113)
			putchar ((char) low);
		low++;
	}
	putchar('\n');
	return (0);
}
