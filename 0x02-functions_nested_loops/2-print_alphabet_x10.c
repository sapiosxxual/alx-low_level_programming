#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10x in alphabets
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char az;

	for (i = 0; i <= 9; i++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
	_putchar('\n');
	}
}
