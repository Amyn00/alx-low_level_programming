#include "3-calc.h"

/**
 * op_add - add calc
 * @a: input
 * @b: input
 * Return: res
 */
int op_add(int a, int b)
{
	int res;

	res = a + b;
	return (res);
}

/**
 * op_sub - sub calc
 * @a: input
 * @b: input
 * Return: res
 */
int op_sub(int a, int b)
{
	int res;

	res = a - b;
	return (res);
}

/**
 * op_mul - mul calc
 * @a: input
 * @b: input
 * Return: res
 */
int op_mul(int a, int b)
{
	int res;

	res = a * b;
	return (res);
}

/**
 * op_div - div calc
 * @a: input
 * @b: input
 * Return: res
 */
int op_div(int a, int b)
{
	int res;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = a / b;
	return (res);
}

/**
 * op_mod - mod calc
 * @a: input
 * @b: input
 * Return: res
 */
int op_mod(int a, int b)
{
	int res;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = a % b;
	return (res);
}
