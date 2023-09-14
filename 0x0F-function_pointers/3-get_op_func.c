#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <string.h>
/**
 * get_op_func - selects the correct function to perform the operation.
 * @s: operator passed as an argument to the program.
 *
 * Return: pointer to the corresponding function, or NULL if no match.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 6)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
