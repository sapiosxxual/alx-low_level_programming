#include "main.h"
/**
 * _memcpy-copies memory area.
 * @dest: copied n bytes memory destination
 * @src: pointer where n bytes memory is copied fr
 * @n: number of copied byte
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}

