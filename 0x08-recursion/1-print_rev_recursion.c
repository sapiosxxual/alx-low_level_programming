#include "main.h"
/**
 * _print_rev_recursion-function that prints a string i
 * @s:string to be printed
 */
void _print_rev_recursion(char *s)
{
	int index = 0;

	if (s[index] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[index]);
	}
	else if (index < 0)
	{
		_putchar('\n');
	}
}
