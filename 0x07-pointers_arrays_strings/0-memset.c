#include "main.h"
/**
 * _memset-fills memory with a constant byte
 * @b:constant b to be filled
 * @s:pointer to the memory area
 * @n: number of memrory bytes
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
