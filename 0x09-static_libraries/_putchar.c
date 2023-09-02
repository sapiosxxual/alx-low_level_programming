#include "main.h"
#include <unistd.h>
/**
 * _putchar-display character
 * @c: charcater to be printed
 * Return: On Success 1;
 * On error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
