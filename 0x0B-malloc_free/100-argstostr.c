#include "main.h"
#include <stdlib.h>
/**
 * argstostr-concatenates all the arguments of your program
 * @ac: number of arguments
 * @av : the arguments
 * Return: each argument followed by a new line
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	char *result;
	int total_len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_len++;
		}
		total_len++;
	}
	total_len++;

	result = malloc(sizeof(char) * total_len);
	if (result == NULL)
	{
		return (NULL);
	}

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k++] = av[i][j];
		}
		result[k++] = '\n';
	}

	result[k] = '\0';
	return (result);
}
