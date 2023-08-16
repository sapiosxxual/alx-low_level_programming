#ifndef MAiN_H
#define MAIN_H

#include <stdio.h>

void print_number(int num, int isfirst);
void print_to_98(int n);

#endif

#include "main.h"
/**
 * print_number - prints a single natural number
 * @isfirst: to indicate if it's the first number in the sequence
 * @num: starting number for the sequence
 * Description: This function prints a single natural number
 */
void print_number(int num, int isfirst)
{
	if (!isfirst)
	{
		_putchar(',');
		_putchar(' ');
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		print_number(num / 10, 1);
	}

	_putchar(num % 10 + '0');
}
/**
 * print_to_98 - prints all natural numbers from n to 98,fllwd by a new ln
 * i: starting point
 * @n: starting point
 * Description: using _putchar to write output
 */
void print_to_98(int n)
{
	int isfirst = 1;
	int i = n;

	if (n <= 98)
	{
		while (i <= 98)
		{
			print_number(i, isfirst);
			isfirst = 0;
			i++;
		}
	}
	else
	{
		while (i >= 98)
		{
			print_number(i, isfirst);
			isfirst = 0;
			i--;
		}
	}
	_putchar('\n');
}
