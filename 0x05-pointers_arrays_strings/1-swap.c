#include "main.h"
/**
 * swap_int-swaps the values of two integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int u;
	int *c = &u;

	*c = *a;
	*a = *b;
	*b = *c;
}
