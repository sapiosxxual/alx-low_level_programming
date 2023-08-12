#include <stdio.h>
/**
 * main -print a-z and then A-Z and a new linee
 *
 * Return: always (0)
 */
int main(void)
{
	char lower = 'a';
	char UPPER = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (UPPER <= 'Z')
	{
		putchar(UPPER);
		UPPER++;
	}
	putchar('\n');
	return (0);
}
