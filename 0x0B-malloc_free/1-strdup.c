#include "main.h"
#include <stdlib.h>
/**
 * _strdup-returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the string given as parameter
 * Return: the new string;
 */
char *_strdup(char *str)
{
	char *newStr = NULL;
	size_t i = 0;
	size_t size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	size++;
	newStr = (char *)malloc(size * sizeof(char));
	if (newStr = NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		newStr[i] = str[i];
		i++;
	}

	return (newStr);
}
