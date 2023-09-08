#include <stdio.h>
#include <stdlib.h>
/**
 * is_positive_number - Checks if a string is a positive number.
 * @str: The string to check.
 *
 * Return: 1 if it's a positive number, 0 otherwise.
 */
int is_positive_number(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first positive number.
 * @num2: The second positive number.
 *
 * Return: The result of the multiplication.
 */
unsigned long multiply(unsigned long num1, unsigned long num2)
{
	return (num1 * num2);
}
/**
 * main- use argc and argv[] to run command line
 * @argc: number of arguments
 * @argv: the arguments
 * Return: (0);
 */
int main(int argc, char *argv[])
{
	char *num1_str;
	char *num2_str;
	unsigned long result;
	unsigned long num1;
	unsigned long num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1_str = argv[1];
	num2_str = argv[2];
	if (!is_positive_number(num1_str) || !is_positive_number(num2_str))
	{
		printf("Error\n");
		return (98);
	}
	num1 = strtoul(num1_str, NULL, 10);
	num2 = strtoul(num2_str, NULL, 10);
	result = multiply(num1, num2);

	printf("%lu\n", result);

	return (0);
}
