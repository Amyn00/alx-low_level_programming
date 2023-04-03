#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the char c
 * @c: input
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
