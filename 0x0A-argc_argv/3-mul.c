#include "main.h"

/**
 * main - write a prog that multiplies two numbers
 * @argc: count
 * @argv: value
 * Return: 0 and 1 if the argc more than two argument
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc > 1 && argc < 4)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
