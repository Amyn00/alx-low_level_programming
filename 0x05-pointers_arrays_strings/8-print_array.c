#include "main.h"
#include <stdio.h>
/**
 * print_array - write a func that prints n elements of an array of int
 *
 * @a: input
 * @n: input
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
