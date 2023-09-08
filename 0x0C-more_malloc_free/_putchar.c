#include "main.h"
#include <unistd.h>
/**
 * _putchar- use to print character one after the other
 * @c: character
 * Return: On success (0),
 * On error (-1) is returned and error is set appriopraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
