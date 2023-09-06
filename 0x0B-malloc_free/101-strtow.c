#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * countWords - Counts the number of words in a string.
 * @str: The input string.
 * Return: The number of words.
 */
int countWords(char *str)
{
	int count, is_word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			is_word = 0;
		}
		else if (is_word == 0)
		{
			count++;
			is_word = 1;
		}
		str++;
	}
	return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 * Return: An array of words.
 */
char **strtow(char *str)
{
	int word_count, i, word_length;
	char **words, *word_start;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = countWords(str);

	if (word_count == 0)
		return (NULL);
	words = malloc((word_count + 1) * sizeof(char *));
		if (words == NULL)
			return (NULL);
	i = 0;
	while (*str && i < word_count)
	{
		while (*str == ' ')
			str++;

	word_start = str;

	while (*str && *str != ' ')
		str++;

	word_length = str - word_start;

	words[i] = malloc(word_length + 1);
	if (words[i] == NULL)
	{
		while (i > 0)
			free(words[--i]);
		free(words);
		return (NULL);
	}
	strncpy(words[i], word_start, word_length);
	words[i][word_length] = '\0';
	i++;
	}
	words[word_count] = NULL;
	return (words);
}

