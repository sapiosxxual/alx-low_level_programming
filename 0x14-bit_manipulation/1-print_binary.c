#include "main.h"
/**
 * _putchar - write char as outout
 * @c: the char
 * Return: On Success (1) if failed (0)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number
 * Return: binary of the number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}
