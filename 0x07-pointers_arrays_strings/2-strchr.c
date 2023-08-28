#include "main.h"
/**
 * _strchr-locates a character in a string.
 * @s: string
 * @c: character to be located
 * Return: pointer to  1st apprance of char c in str s or null if c not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
		}
	}

	return ('\0');
}

