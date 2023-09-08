#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * is_digits- Checks if a string contains a non digit char
 * @str: The string to check.
 *
 * Return: 0 if it's non-digit, 1 0therwise.
 */
int is_digits(char *str)
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
 * _strlen - returns the length of a string
 * @str: the string
 * Return: length of the string
 */
int _strlen(char *str)
{
	int l = 0;

	while (str[l] != '\0')
		l++;
	return (l);
}
/**
 * errors- handle errors for main
 */
void errors(void)
{
	printf("Error\n");
		exit(98);
}
/**
 * main- multiplies two positive numbers
 * @argc: number of arguments
 * @argv: the arguments in array
 * Return: Always (0);
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, c, dg1, dg2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digits(s1) || !is_digits(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		dg1 = s1[len1] - '0';
		c = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			dg2 = s2[len2] - '0';
			c += result[len1 + len2 + 1] + (dg1 * dg2);
			result[len1 + len2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			result[len1 + len2 + 1] += c;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
