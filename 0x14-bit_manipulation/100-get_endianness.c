#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: 0 got big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c);
}
