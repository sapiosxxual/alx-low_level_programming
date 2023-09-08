#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _realloc-reallocates a memory block using malloc and free
 * @ptr: old memory allocation
 * @old_size: old size of memory
 * @new_size: new size of memory
 * Return: new memory allocation with new size realloc
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	old_ptr = new_ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
