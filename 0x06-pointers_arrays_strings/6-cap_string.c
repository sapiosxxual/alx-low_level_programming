#include "main.h"
/**
 * cap_string-capitalizes first char of each word in string
 * @str: string
 * Return: str after function
 */
char *cap_string(char *str)
{
	int i, j;
	char c[] = {44, 59, 46, '.', 63, '"', '(', ')', '{', '}', ' ', '\t', '\n'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	for (j = 0; c[j] != '\0'; i++)
	{
		if (c[j] == str[i] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] = str[i + 1] - 32;
		}
	}
	}
	return (str);
}
