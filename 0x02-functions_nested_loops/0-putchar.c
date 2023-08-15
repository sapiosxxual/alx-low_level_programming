#include <stdio.h>
/**
 * main - print _putchar
 *
 * Return: (0)
 */
int main(void)
{
	int i;
	char c[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
