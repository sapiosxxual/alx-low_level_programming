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
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	size_t total_len = len1 + len2;
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

	result = malloc((total_len + 1) * sizeof(char));

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
