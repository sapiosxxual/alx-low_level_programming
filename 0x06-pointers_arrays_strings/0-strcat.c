#include "main.h"
#include <string.h>
/**
 * _strcat-concatenates two strings
 *@dest: first string
 *@src: second string
 *Return: dest after appending str to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int destlen = 0;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}

	while (src[i] != 0)
	{
		dest[destlen + i] = src[i];
		i++;
	}

	dest[destlen + i] = '\0';
	return (dest);
}
