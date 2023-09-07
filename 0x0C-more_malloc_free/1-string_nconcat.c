#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat-function that concatenates two strings using first n bytes
 * of the second string, if n = second string the full 2nd str will be used
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2
 * Return: the nee string ater concatenating
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1 = 0;
	size_t len2 = 0;
	size_t total_len = 0;
	char *newString;
	size_t i, j = 0;

	while (s1[len1] != '\0')
		len1++;
	if (s2 == NULL)
	{
		s2 = "";
		len2 = 0;
	}
	else
	{
		while (s2[len2] != '\0')
		len2++;
	}
	if (len2 > n)
		total_len = len1 + n + 1;
	if (len2 <= n)
		total_len = len1 + len2 + 1;

	newString = malloc(sizeof(char) * total_len);
	if (newString == NULL)
		return (NULL);
	for (i = 0, j = 0; i < total_len - 1; i++)
	{
		if (i < len1)
		{
			newString[i] = s1[i];
		}
		else
		{
			newString[i] = s2[j];
			j++;
		}
	}

	newString[i] = '\0';
	return (newString);
}

