#include "main.h"
/**
 * _strspn-gets the length of a prefix substring.
 * @s: string to be searched
 * @accept: prefix to be measured
 *
 * Return: Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int bytes;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accpet[index] == '\0')
			{
				return (bytes);
			}
		}

		s++;
	}
}



