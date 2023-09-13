#include "function_pointers.h"
#include <unistd.h>
/**
 * _putchar - print character
 * @c: character
 * Return: On Success (0)
 * return (-1) On error and set error appropraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
