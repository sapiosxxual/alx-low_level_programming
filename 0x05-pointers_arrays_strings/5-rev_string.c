#include "main.h"
/**
 * rev_string-reverses a string
 * @s: string to be reversed
 * Description: using _strlen to get the length of character
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	char temp;
	int i = 0;
	int end = length - i - 1;

	while (i < end)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[end] = temp;

		i++;
		end--;
	}
}
