#include "main.h"

/**
 * flip_bits - counting the number of bits to change
 * to move from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned long int count = 0;

	while (result > 0)
	{
		if (result & 1)
			count++;
		result >>= 1;
	}
	return (count);
}
