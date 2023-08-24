#include "main.h"
/**
 * leet - Encodes a string into "1337" text.
 * @str: The input string.
 * Return: The encoded string.
 */
char *leet(char *str)
{
	char *leet_chars = "aeotlAEOTL";
	char *leet_subs = "43071031";

	for (int i = 0; str[i] != '\0'; i++)
	{
		for (int j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_subs[j];
			}
		}
	}

	return (str);
}
