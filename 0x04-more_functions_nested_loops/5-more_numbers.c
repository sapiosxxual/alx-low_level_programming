#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 */
void more_numbers(void)
{
	int i, n;

	for (n = 1; n <= 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
		_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
