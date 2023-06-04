#include <stdio.h>

/**
 * print_buffer - write a func that print a buffer
 *
 * @b: input 1
 * @size: input 2
 *
 */

void print_buffer(char *b, int size)
{
	int a, c;

	if (size <= 0)
		printf("\n");
	else
	{
		for (a = 0; a < size; a += 10)
		{
			printf("%08x: ", a);
			for (c = 0; c < 10; c++)
			{
				if (c % 2 == 0 && c != 0)
					printf(" ");
				if ((c + a) > size - 1)
				{
					printf("  ");
				}
				else
					printf("%.2x", b[a + c]);
			}
			printf(" ");
			for (c = 0; c < 10; c++)
			{
				if ((c + a) > size - 1)
					break;
				if (b[c + a] <= 31 || b[c + 1] >= '~')
					b[c + a] = '.';
				putchar(b[c + a]);
			}
			printf("\n");
		}
	}
}
