#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - print opcodes
 * @number_of_bytes: number of bytes to be printed
 */
void print_opcodes(int number_of_bytes)
{
	int i;
	unsigned char *main_ptr = (unsigned char *)&print_opcodes;

	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%02x", main_ptr[i]);
	}
	printf("\n");
}
/**
 * main - main function opcode to be printed
 * @argc: number of arguments which is 1 otherwise error
 * @argv: the argument
 * Return: (0);
 */
int main(int argc, char *argv[])
{
	int number_of_bytes;

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

	print_opcodes(number_of_bytes);

	return (0);
}
