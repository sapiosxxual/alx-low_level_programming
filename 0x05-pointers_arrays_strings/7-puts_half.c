#include "main.h"
/**
 * _strlen: string length
 * @str: string
 */
int _strlen(char *str)
{
	int n;

	for (n = 0; s[n] != '\0';)
	{
		n++;
	}
	return (n);
}
/**
 * puts_half-  prints half of a string, followed by a new line.
 * @str: string
 */
void puts_half(char *str)
{
	int l = _strlen(*str);

	(for i = 0; i < l / 2; i++)
	{
		if (l % 2 == 1)
		{
			_putchar(s[i]);
			i++;
			_putchar(s[i+1]);
			_putchar('\n');
		}
		else
		{
			_putchar(s[i]);
			i++;
			_putchar('\n');
		}
	}
}
