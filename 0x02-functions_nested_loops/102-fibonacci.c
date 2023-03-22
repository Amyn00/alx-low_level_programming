#include <stdio.h>

/**
 * main - fibonacci
 *
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;
	unsigned long a = 0, b = 1, c;

	for (i = 0; i < 50; i++)
	{
		printf("%lu", a);
		c = a + b;
		a = b;
		b = c;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
