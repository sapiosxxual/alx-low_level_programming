#include "main.h"
/**
 * strlength- calculate string length
 * @s: the string
 * Return: length of the string
 */
int strlength(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + strlength(s + 1));
}
/**
 * is_palindrome_recursion-rns 1 if a string is a palindrome and 0 if not
 * @s: string
 * @start: strikg point
 * @end: fiishing point
 * Return: 1 if palindrom if not 0;
 */
int is_palindrome_recursion(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_recursion(s, start + 1, end - 1));
}
/**
 * is_palindrome-returns 1 if palindrome if not 0
 * @s: the string
 * Return: 1 if palindrome if not 0
 */
int is_palindrome(char *s)
{
	int length = strlength(s);

	return (is_palindrome_recursion(s, 0, length - 1));
}
