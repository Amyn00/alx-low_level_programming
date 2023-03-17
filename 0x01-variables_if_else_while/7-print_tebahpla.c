#include <stdio.h>

/**
 * main - Write a program that prints the lowercase alphabet in reverse
 * Return: 0
 */

int main(void)
{
	int n;

	n = 122;
	while (n > 96)
	{
		putchar((char) n);
		n--;
	}
	putchar('\n');
	return (0);
}
