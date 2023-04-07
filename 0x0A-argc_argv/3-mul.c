#include "main.h"

/**
 * main - write a prog that multiplies two numbers
 * @argc: count
 * @argv: value
 * Return: 0 and 1 if the argc more than two argument
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc < 4)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
