#include "main.h"
/**
 * _isalpha - return 1 if c is upp or low
 *
 * Description: using _putchar to print
 *
 * @c: collect character
 * Return: 1 if c is uplnor low otherwuse 0
 */
int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper < '2'; upper++)
		{
			if (lower == c || upper == c)
			{
				letter = 1;
			}
		}
	}
	return (letter);
}
