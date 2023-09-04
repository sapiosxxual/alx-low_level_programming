#include "main.h"
#include <stdlib.h>
/**
 * create_array- creates an array of chars,
 * and initializes it with a specific char
 * @size: number of malloc
 * @c: character
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

