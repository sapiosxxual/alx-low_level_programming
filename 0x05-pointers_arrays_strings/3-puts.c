#include "main.h"
/**
 *_puts-print a string fllwd nl
 *Description: using _putchar to disply output
 *@i: first c in string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
