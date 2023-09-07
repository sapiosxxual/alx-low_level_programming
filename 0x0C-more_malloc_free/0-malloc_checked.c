#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked- allocates memory using malloc,
 * if malloc fails, the malloc_checked function
 * should cause normal process termination with a status value of 98
 * @b: the integer
 * Return: 98 if failed
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}

