#include "main.h"

/**
 * main - write a prog that prints all args it receives
 * @argc: count
 * @argv: value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
