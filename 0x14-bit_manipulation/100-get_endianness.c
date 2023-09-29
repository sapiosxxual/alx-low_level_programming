#include "main.h"
/**
 * get_endianess - checks if its big or small endianess
 * Return: 0 if big 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
