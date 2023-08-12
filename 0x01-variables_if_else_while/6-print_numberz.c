#include <stdio.h>
/**
 * main -print single digit
 *
 * Return: always(0)
 *
 */
int main(void)
{
	int alphabet = 0;

	while (alphabet <= 9)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
