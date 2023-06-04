#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character C
 * @c: input
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
