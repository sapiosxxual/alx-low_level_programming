#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>
/**
 * main- minimum number of coins to make change for an amount of money.
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: using _atoi to chnage string to int
 * Return: (9) on success, 1 if error
 */
int main(int argc, char *argv[])
{
	int num, j, result;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			num -= coins[j];
			result++;
		}
	}
	printf("%d\n", result);

	return (0);
}