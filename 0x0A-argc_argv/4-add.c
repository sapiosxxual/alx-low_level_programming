#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _isdigit-check if str contains digit
 * @str: the string
 * Return: (0);
 */
int _isdigit(char *str)
{
	unsigned int i = 0;

	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}

	return (1);
}
/**
 * _atoi-convert string to integer
 * @str: the string
 * Return: the integer converted
 */
int _atoi(char *str)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (str[0] == '+' || str[0] == '-')
	{
		if (str[0] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
		}
		else
		{
			return (0);
		}
		i++;
	}

	return (result * sign);
}
/**
 * main-program that adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	int num;

	while (i < argc)
	{
		if (_isdigit(argv[i]))
		{
			num = _atoi(argv[i]);
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}


