#include "main.h"

/**
 * main - write a prog that prints the min num of coins make change
 * for an amount of money
 * @argc: count
 * @argv: value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0, nbcoin = 0, cent;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 1)
	{
		printf("0\n");
		return (0);
	}
	while (coin[i])
	{
		while (cent >= coin[i])
		{
			cent -= coin[i];
			nbcoin++;
		}
		if (cent == 0)
			break;
		i++;
	}
	printf("%d\n", nbcoin);
	return (0);
}
