#include <stdio.h>
/**
 *  main -generating random number and detect if its positive or negaative
 *
 *  Return: always(0)
 *
 */
int main(void)
{
int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
