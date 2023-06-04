#include <stdio.h>

/**
 * print_diagsums - write a func that prints the sum of the
 * two diag of square matrix of int
 *
 * @a: input
 * @size: input
 *
 */

void print_diagsums(int *a, int size)
{
	int i, j, diag_1 = 0, diag_2 = 0, s = size - 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				diag_1 = diag_1 + *(a + i * size + j);
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = s; j >= 0; j--)
		{
			diag_2 = diag_2 + *(a + i * size + j);
			s--;
			break;
		}
	}
	printf("%d, %d\n", diag_1, diag_2);
}
