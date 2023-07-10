#include "main.h"

/**
 * main - write a prog that multiplies two numbers
 * @argc: count
 * @argv: value
 * Return: 0 and 1 if the argc more than two argument
 */

int main(int argc, char *argv[])
{
	int x, y, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;

	printf("%d\n", mul);

	return (0);
}
