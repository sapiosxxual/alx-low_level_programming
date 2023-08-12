#include <stdio.h>
/**
 * main -print all single digit in base ten inc zero
 *
 * Return: always(0)
 *
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{	putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
