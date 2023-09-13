#include "function_pointers.h"
/**
 * print_name - a function that uses a function pointer to prints a name.
 * @name: name to be printed
 * @f: pointer to print_name_function
 * Return: (0)
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
