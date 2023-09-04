#include "main.h"
#include <stdlib.h>
/**
 * _putchar-use to print character
 * @c: character
 * Return: On success 1,
 * On error. 1 is returned and error is set appropriately
 */
int _putchar(char  *c)
{
	return (write(1, &c, 1));
}
