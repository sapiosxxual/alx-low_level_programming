#include "main.h"

/**
 * clear_bit - set the value of the specified bit to 0
 * @n: pointer to the number that's changing
 * @index: index of the bit to clear
 *
 * Return: On success 1, return -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
