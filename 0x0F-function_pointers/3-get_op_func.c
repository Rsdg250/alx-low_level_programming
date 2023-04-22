#include "3-calc.h"

/**
 * get_op_func - A function that selects
 * the correct calculator operator
 * @s: The pointer to an operator (+|-|*|/|%)
 * Return: A pointer to an operator
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

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
