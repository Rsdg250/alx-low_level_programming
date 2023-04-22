#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: The name to print
 * @f: Function to callback (pointer to function)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
