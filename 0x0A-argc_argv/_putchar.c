#include "main.h"
#include <unistd.h>
/**
 * _putchar- display character
 * @c: charcter
 * Return: On Success 1.
 * On error, -1 is returned amd error is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
