#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - selects operator
 * @s: operator used
 * Return: pointer to a function
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
	int a;

	a = 0;
	while (ops[a].op != NULL && strcmp(ops[a].op, s) != 0)
	{
		a++;
	}
	return (ops[a].f);
}
