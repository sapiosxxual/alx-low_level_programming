#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name_function - print name
 * @name: name to be printed
 */
void print_name_function(char *name)
{
	printf("%s\n", name);
}
/**
 * print_name - a function that uses a function pointer to prints a name.
 * @name: name to be printed
 * @f: pointer to print_name_function
 * Return: (0)
 */
void print_name(char *name, void (*f)(char *))
{
	f = print_name_function;
	f(name);
}
