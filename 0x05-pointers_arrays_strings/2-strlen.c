#include "main.h"
#include <string.h>
/**
 * _strlen-returns length of string
 *_putchar: print output
 *@s: string
 *Return: length of the string
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0';)
	{
		n++;
	}
	return (n);
}
