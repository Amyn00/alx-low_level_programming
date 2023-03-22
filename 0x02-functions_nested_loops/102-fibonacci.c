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
	long int sum;
	long int first, second;
	int count;

	sum = 0;
	first = 0;
	second = 1;
	count = 0;

	while (count < 49)
	{
		sum = first + second;
		printf("%li, ", sum);
		first = second;
		second = sum;

		count++;
	}
	sum = first + second;
	printf("%li\n", sum);

	return (0);
}
