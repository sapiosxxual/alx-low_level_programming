#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * array_range-function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: values
 */
int *array_range(int min, int max)
{
	int *values;
	int v = 0;
	int i;

	if (min > max)
		return (NULL);
	values = malloc(sizeof(int) * (max - min - 1));
	if (values == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		values[v] = i;
		v++;
	}

	return (values);
}
