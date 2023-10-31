#include "main.h"
#include <stdio.h>
/**
 * _putchar - print charavter to standard output
 * @c: character to be printed
 * Return: On success (0), return -1 if failed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
