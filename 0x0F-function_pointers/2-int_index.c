#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: array of integers
 * @size: the array size
 * @cmp: comparing values of array
 * Return: the index of the integer in the array compared
 * error if not comparable
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}


