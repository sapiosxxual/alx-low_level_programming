#include "unistd.h"
/**
 * _putchar-print charcater(s) as output
 * Return: On Success 1.
 * On error, -1 is returned and error is set approrpraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
