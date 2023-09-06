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
	int i = 0;
	int j = 0;
	int k = 0;
	char *result;
	int total_len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			total_len++;
			j++;
		}
	}
	total_len++;

	result = malloc(sizeof(char) * total_len);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			result[k] = av[i][j];
			j++;
		}
		result[k] = '\n';
		k++;
	}

	result[k] = '\0';
	return (result);
}
