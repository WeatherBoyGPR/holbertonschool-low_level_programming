#include "3-calc.h"

/**
 * get_op_func - will match an operator with a function pointer
 * @s: string which contains the operator
 *
 * Return: pointer to the correct function, NULL on failure
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



	while (ops[i].op)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}

	exit(99);
}
