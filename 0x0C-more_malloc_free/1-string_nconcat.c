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
	unsigned int len1 = 0, len2 = 0, total_len, i, j;
	char *newString;

	while (s1[len1] != '\0')
		len1++;
	if (s2 == NULL)
		s2 = "";
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	total_len = len1 + n + 1;
	newString = malloc(sizeof(char) * total_len);
	if (newString == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		newString[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		newString[i + j] = s2[j];
	}
	newString[i + j] = '\0';

	return (newString);
}
