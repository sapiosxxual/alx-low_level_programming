#include "main.h"
#include <stdio.h>
/**
 * main- print all arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while(i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
