#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 & 1 chars
 * Return: converted no or 0 if theres one or more chars in str b thats not 0/1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}
