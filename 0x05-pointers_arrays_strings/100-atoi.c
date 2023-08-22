#include "main.h"
#include <limits.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)

{
	int sign = 1;
	int r = 0;
	int i = 0;

	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (r > INT_MAX / 10 || (r == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}
		r = r * 10 + (s[i] - '0');
		i++;
	}
	return (r * sign);
}
