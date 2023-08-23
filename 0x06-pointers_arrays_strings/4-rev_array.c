#include "main.h"
/**
 * rev-array-reverses the array content
 * @a: array
 * @n: number of array content
 */
void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end  = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
