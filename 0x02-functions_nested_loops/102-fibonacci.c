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

	for (i = 0; i <= 50; i++)
	{
		if (i == 0 || i == 1)
			printf("%d, ", i);
		printf("%d", ((i - 1) + (i - 2)));
		if (i < 50)
			printf(", ");
	}
	return (0);
}
