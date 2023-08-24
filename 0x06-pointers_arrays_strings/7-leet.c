#include <stdio.h>

/**
 * leet - Encodes a string into "1337" text.
 * @str: The input string.
 * Return: The encoded string.
 */
char *leet(char *str)
{
	char leet_map[256] = {0};
	leet_map['a'] = leet_map['A'] = '4';
	leet_map['e'] = leet_map['E'] = '3';
	leet_map['o'] = leet_map['O'] = '0';
	leet_map['t'] = leet_map['T'] = '7';
	leet_map['l'] = leet_map['L'] = '1';

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (leet_map[str[i]] != 0)
		{
			str[i] = leet_map[str[i]];
		}
	}

	return str;
}
