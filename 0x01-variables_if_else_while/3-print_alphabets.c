#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line
 * Return: 0
 */

int main(void)
{
	int low = 97;
	int up = 65;

	while (low < 123)
	{
		putchar ((char) low);
		low++;
	}
	while (up < 91)
	{
		putchar ((char) up);
		up++;
	}
	putchar('\n');

	return (0);
}
