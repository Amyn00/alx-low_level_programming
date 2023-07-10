#include "main.h"

/**
 * _print - print the string
 * @str: input
 * @l: input
 */
void _print(char *str, int l)
{
	int i = 0, j = 0;

	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	free(str);
}

/**
 * mul - multiplication
 * @n: input
 * @num: input
 * @num_i: input
 * @dest: input
 * @dest_i: input
 * Return: dest
 */

char *mul(char n, char *num, int num_i, char *dest, int dest_i)
{
	int j, k, mul, mul2 = 0, add, add2 = 0;


	for (j = num_i, k = dest_i; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mul2;
		mul2 = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + add2;
		add2 = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (add2 += mul2; k >= 0 && add2; k--)
	{
		add = (dest[k] - '0') + add2;
		add2 = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (add2)
		return (NULL);
	return (dest);
}

/**
 * _isdigit - check if is digit
 * @av: input
 * Return: 0
 */

int _isdigit(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
	}
	return (0);
}

/**
 * init - initializes a string
 * @str: input
 * @l: input
 */

void init(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
		str[i] = '0';
	str[i] = '\0';
}

/**
 * main - write a prog that mult two pos number
 * @argc: input
 * @argv: input
 * Return: mul
 */

int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *ptr, *t, e[] = "Error\n";

	if (argc != 3 || _isdigit(argv))
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	ptr = malloc(ln * sizeof(char));
	if (ptr == NULL)
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	init(ptr, ln - 1);
	for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, ptr, (ln - 2) - i);
		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				_putchar(e[ti]);
			free(ptr);
			exit(98);
		}
	}
	_print(ptr, ln - 1);
	return (0);
}
