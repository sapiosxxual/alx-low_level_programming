#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: the unsigned long int where bit is extracted
 * @index: the index of the bit to retrieve starting from 0
 * Return: value of bit at the specified index 0 or 1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int long mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n & mask) ? 1 : 0);
}
