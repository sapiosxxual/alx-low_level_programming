#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 * @i: starting point
 * Description: using _putchar to print output;
 * Return: no return
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar("\n");
}
