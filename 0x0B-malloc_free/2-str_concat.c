#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat-concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: result
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = 0;
	size_t len2 = 0;
	size_t total_len = 0;
	char *result;
	size_t j, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	total_len = len1 + len2 + 1;
	result = malloc(total_len * sizeof(char));

	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		result[i] = s2[j];
	}

	return (result);
}
