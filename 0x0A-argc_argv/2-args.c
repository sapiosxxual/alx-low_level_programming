#include "main.h"
#include <stdio.h>
/**
 * main- print all arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
