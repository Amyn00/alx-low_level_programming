#include "main.h"

/**
 * main - write a prog that print the num of arg passed into it
 * @argc: count
 * @argv: value
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
