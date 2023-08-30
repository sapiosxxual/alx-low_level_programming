#include "main.h"
/**
 * strlength-calcuulate string length
 * @s: the string
 * Return: length of the string
 */
int strlength(char *s)
{
	int index = 0;

	if (s[index] == '\0')
	{
		return (0);
	}
	return (1 + strlength(s + 1));
}
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
