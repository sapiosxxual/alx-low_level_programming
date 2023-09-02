#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * _atoi- conv atring to int
 * @s: string input
 *
 * Return: integerr value
 */
int _atoi(char *s)
{
	int rslt = 0;
	int sign = 1;
	int started = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			int digit = *s - '0';

			if (rslt > INT_MAX / 10 || (rslt == INT_MAX / 10 && digit > INT_MAX % 10))
			{
				return ((sign == 1) ? INT_MAX : INT_MIN);
			}

			rslt = rslt * 10 + (*s - '0');
			started = 1;
		}
		else if (started)
			break;
		s++;
	}

	return (rslt * sign);
}
/**
 * main- program that multiplies two numbers and conv strvto int
 * @argc: number kf arguments
 * @argv: arrays of arguments
 * Return: (0);
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	mul = num1 * num2;

	printf("%d\n", mul);

	return (0);
}
