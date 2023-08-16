#ifndef MAiN_H
#define MAIN_H

#include <stdio.h>

void print_number(int num, int isFirst);
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
	if (num < 10)
	{
		_putchar(num + '0');
	}
	else
	{
		_putchar(num / 10 + '0');
		_putchar(num % 10 + '0');
	}
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

	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
		{
			print_number(i, isfirst);
			isfirst = 0;
		}
	}
	else
	{
		for (int i = n; i >= 98; i--)
		{
			print_number(i, isfirst);
			isfirst = 0;
		}
	}
	_putchar('\n');
}
