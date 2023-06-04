#include <stdio.h>

/**
 * main - write a programme that prints the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	int a = 97;

	while (a < 123)
	{
		putchar((char) a);
		a++;
	}
	putchar('\n');
	return (0);
}
