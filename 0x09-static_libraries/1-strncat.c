#include "main.h"
/**
 * _strncat-concatenates two strings
 * @dest: first string
 * @src: second string
 * @n:most bytes from src
 * Return: dest after concatenating
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int destlen = 0;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}

	while (src[i] != '\0' && i < n)
	{
		dest[destlen + i] = src[i];
		i++;
	}

	dest[destlen + i] = '\0';

	return (dest);
}
