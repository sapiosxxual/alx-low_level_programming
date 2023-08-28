#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints the character to std output
 * @c: chracter to be printed
 *
 * Return: On success 1;
 *  On error, -1 is returned, and error is set appriopra
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
