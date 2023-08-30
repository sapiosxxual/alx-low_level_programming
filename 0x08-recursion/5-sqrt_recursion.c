#include "main.h"
/**
 * _sqrt-square root of a number
 * @n: the number
 * @num: starring point
 * Return: square root
 */
int _sqrt(int n, int num)
{
	if (num * num == n)
	{
		return (num);
	}
	if (num * num > n)
	{
		return (-1);
	}
	return (_sqrt(n, num + 1));
}
/**
 * _sqrt_recursion-returns the natural square root of a number
 * @n: the number
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt(n, 2));
}
