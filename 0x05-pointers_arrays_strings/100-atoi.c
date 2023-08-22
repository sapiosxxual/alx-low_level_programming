#include "main.h"
#include <limits.h>
/**
 * _atoi- conv atring to int
 * @s: string input
 *
 * Return: integerr value
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int started = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
			started = 1;
		}
		else if (started)
			break;
		s++;
	}

	return (result * sign);
}
