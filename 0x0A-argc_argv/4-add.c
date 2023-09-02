#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
	int hasError = 0;
	int num;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	while (i < argc)
	{
		num = _atoi(argv[i]);

		if (num > 0)
		{
			sum += num;
		}
		else
		{
			hasError = 1;
			break;
		}

		if (hasError)
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}


