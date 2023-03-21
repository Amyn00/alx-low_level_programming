#include <stdio.h>
/**
 * print_to_98 - write a func that print all num from n to 98
 *
 * @n: number
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		printf("%d", i);
		if (i < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}
