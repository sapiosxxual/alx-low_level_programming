#include "main.h"
/**
 * _strlen-string length
 * @s: the string
 * Description: using _strlen to get length of string
 * Return: length of character
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
/**
 * rev_string-reverses a string
 * @s: string to be reversed
*/
void rev_string(char *s)
{
	int i = 0;
	int l = _strlen(s);
	char temp;
	int end = l - i - 1;

	while (i < end)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[end] = temp;

		i++;
		end--;
	}
}
