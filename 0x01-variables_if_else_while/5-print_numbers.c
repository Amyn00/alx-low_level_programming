#include <stdio.h>

/**
 * main - write numbers from zero to nine
 * Return: 0
 */

int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}

	printf("\n");

	return (0);
}
