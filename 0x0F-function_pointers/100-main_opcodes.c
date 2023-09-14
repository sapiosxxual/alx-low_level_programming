#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function opcode to be printed
 * @argc: number of arguments which is 1 otherwise error
 * @argv: the argument
 * Return: (0);
 */
int main(int argc, char *argv[])
{
	int number_of_bytes;
	char *arr;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < number_of_bytes; i++)
	{
		if (i == number_of_bytes -1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx", arr[i]);
	}
	return (0);
}
