#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - program that performs simple operations.
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char op[2];

	if(argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op[0] = argv[2][0];
	op[1] = '\0';
	num2 = atoi(argv[3]);

	if (!op[0])
	{
		printf("Error\n");
		exit(99);
	}
	if ((op[0] == '/' || op[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(op)(num1, num2);
	printf("%d\n", result);

	return (0);
}
