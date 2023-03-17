#include <stdio.h>

/**
 * main - Write a program that prints all single digit numbers zero to nine
 * Return: 0
 */

int main(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		putchar((char)n);
		n++;
	}
	putchar('\n');
	return (0);
}
