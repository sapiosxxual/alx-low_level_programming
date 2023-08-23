#include "main.h"
/**
 * _strcmp-compare two string and return the difference as int
 * @s1: first string
 * @s2: second string
 * Return: difference base on lexographical order
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
