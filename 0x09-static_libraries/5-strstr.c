#include "main.h"
/**
 * _strstr-function that locates the first occurence of a substring
 * @haystack: string
 * @needle: substring to be located
 *
 * Return: pointer to the beginning of the located substring, or NULL if the
 *  substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			while (haystack[index] == needle[index])
			{
				if (needle[index + 1] == '\0')
				{
					return (haystack);
				}
			index++;
			}
		}
		haystack++;
	}
	return ('\0');
}
