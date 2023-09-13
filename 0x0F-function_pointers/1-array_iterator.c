#include "function_pointers.h"
/**
 * array_iterator - iterates through array
 * @array: the array
 * @size: length or sise of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
