#include "function_pointers.h"

/**
 * print_name - write a function that prints a name
 * @name: input name
 * @f: input fuction
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
