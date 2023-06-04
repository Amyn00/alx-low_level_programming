#include <stdio.h>

/**
 * main - Write a program that prints all possible combinations
 * of single-digit numbers.
 *
 * Return: 0
 */

int main(void)
{
	int n;

	n = 48;
	for (n = 48; n < 58; n++)
	{
		putchar((char) n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
