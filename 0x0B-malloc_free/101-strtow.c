#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow-function that splits a string into words.
 * @str: the string
 * Return: the words
 */
char **strtow(char *str)
{
	int i, j, k, word_count = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
		if (words == NULL)
		{
			return (NULL);
		}
	for (i = 0, k = 0; str[i] && k < word_count; k++)
	{
		while (str[i] && str[i] == ' ')
			i++;
		for (j = i; str[j] && str[j] != ' '; j++);

		words[k] = malloc(sizeof(char) * (j - i + 1));
		if (words[k] == NULL)
		{
			while (k > 0)
			{
				free(words[--k]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[k], str + i, j - i);
		words[k][j - i] = '\0';
			i = j;
	}

	words[word_count] = NULL;
	return (words);
}
