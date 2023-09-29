#include "main.h"
/**
 * flip_bits - coutung the no of bits to change
 * to move from one nö to another
 * @n: first no
 * @m: second no
 * Return: no of bits change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i++)
	{
		current = exclusive >> 1;
		if (current & 1)
			count++;
	}
	return (count);
}
