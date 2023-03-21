#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character C
 *
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
