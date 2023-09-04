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
	size_t i = 0;
	char *array;

	array = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}

