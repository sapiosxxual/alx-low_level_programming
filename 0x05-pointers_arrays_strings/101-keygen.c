#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-generates random valid passwordi
 * Return: (0);
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	sum = 0;

	while (sum <= 2473)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(4334 - sum);

	return (0);
}
