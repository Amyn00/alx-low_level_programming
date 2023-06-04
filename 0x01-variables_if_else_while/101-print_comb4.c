#include <stdio.h>

/**
 * main - Write a program that prints all possible
 * different combinations of three digits.
 *
 * Return: 0
 */

int main(void)
{
	int x, y, z;

	for (x = 48; x < 58; x++)
	{
		for (y = x + 1; y < 58; y++)
		{
			for (z = y + 1; z < 58; z++)
			{
				if (x != y && x != z && y != z)
				{
					putchar((char) x);
					putchar((char) y);
					putchar((char) z);
				}
				if (x == 55 && y == 56 && z == 57)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
