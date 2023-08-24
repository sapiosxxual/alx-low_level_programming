#include "main.h"
/**
 * cap_string- capitalizes first char of each word in string
 * @str: string
 * Return: str after function
 */
char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	char c[] = {44, 59, 46, 33, 63, '"', '(', ')', '{', '}', ' ', '\t', '\n'};

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
	while (c[j] != '\0')
	{
		if (c[j] == str[i] && str[i + i] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + i] = str[i + 1] - 32;
			j++;
		}
	}
	}
	return (str);
}
