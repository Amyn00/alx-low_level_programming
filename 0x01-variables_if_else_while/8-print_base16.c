#include <stdio.h>

/**
 * main - Write a program that prints all the numbers
 * of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int n, l;

	for (n = 48; n < 58; n++)
		putchar((char) n);

	for (l = 97; l < 103; l++)
		putchar((char) l);


	putchar('\n');


	return (0);
}
