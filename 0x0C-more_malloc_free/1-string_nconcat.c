#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat-function that concatenates two strings using 1st n bytes
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2
 * Return: the new string ater concatenating
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *newString;

	while (s1 && s1[len1] != '\0')
		len1++;
	while (s2 && s2[len2] != '\0')
		len2++;
	if (n < len2)
		newString = malloc(sizeof(char) * (len1 + n + 1));
	else
		newString = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!newString)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		newString[i] = s1[i];
	}
	while (n < len2 && i < (len1 + n))
	{
		newString[i++] = s2[j++];
	}
	while (n >= len2 && i < (len1 + len2))
	{
		newString[i++] = s2[j++];
	}
	newString[i] = '\0';
	return (newString);
}
