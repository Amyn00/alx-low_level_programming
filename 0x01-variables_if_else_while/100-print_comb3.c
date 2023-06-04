#include <stdio.h>

/**
 * main - Write a program that prints all possible different
 * combinations of two digits.
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			if (i != j)
			{
				putchar((char) i);
				putchar((char) j);
			}
			if (i == 56 && j == 57)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
