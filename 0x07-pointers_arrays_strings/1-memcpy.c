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
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

