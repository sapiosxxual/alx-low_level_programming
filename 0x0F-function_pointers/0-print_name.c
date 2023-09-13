#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a function that uses a function pointer to prints a name.
 * @name: name to be printed
 * @f: pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
