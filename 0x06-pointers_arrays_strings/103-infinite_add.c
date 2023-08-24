#include "main.h"
#include <string.h>
/**
 * infinite_add-add two numbers
 *
 * Return: r + result_index
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int index_n1 = strlen(n1) - 1;
	int index_n2 = strlen(n2) - 1;
	int result_index = size_r - 1;

	r[result_index] = '\0';

	while (index_n1 >= 0 || index_n2 >= 0 || carry > 0)
	{
		int digit_n1 = (index_n1 >= 0) ? n1[index_n1] - '0' : 0;
		int digit_n2 = (index_n2 >= 0) ? n2[index_n2] - '0' : 0;

		int sum = digit_n1 + digit_n2 + carry;
		carry = sum / 10;
		int digit_result = sum % 10;

		if (result_index > 0)
		{
			r[result_index - 1] = digit_result + '0';
			result_index--;
		}
		else
		{
			return (0);
		}

		if (index_n1 >= 0)
			index_n1--;
		if (index_n2 >= 0)
			index_n2--;
	}

	return (r + result_index);
}
