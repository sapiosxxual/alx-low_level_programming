#include <stdio.h>
/**
 *main -print a..z in reverse
 *
 * Return: always(0)
 *
 */
int main(void)
{
	char alphabets = 'z';

	while (alphabets >= 'a')
	{
		putchar(alphabets);
		alphabets--;
	}
	putchar('\n');
	return (0);
}
