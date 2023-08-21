#include "main.h"
/**
 *_puts-print a string fllwd nl
 *Description: using _putchar to disply output
 *@str: string to be printed
 */
void _puts(char *str)

{
	char *str;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
