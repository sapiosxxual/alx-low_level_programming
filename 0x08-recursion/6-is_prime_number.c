#include "main.h"
/**
 * prime_number-function that returns 1
 * if the input integer is a prime number, otherwise return 0
 * @n: number
 * @num: divider
 * Return: 1 if prime otherwise 0
 */
int prime_number(int n, int num)
{
	if (num <= 1)
	{
		return (0);
	}
	if (n % num == 0)
	{
		return (1);
	}
	return (prime_number(n, num - 1));
}
/**
 * is_prime_number-print 1 if prime number otherwise return 0
 * @n: the number
 * Return: 1 if prime number otherwise 0
 */
int is_prime_number(int n)
{
	if  (n <= 1)
	{
		return (0);
	}
	return (!prime_number(n, n - 1));
}

