#include "3-calc.h"

/**
 * get_op_func - Takes in an operator, searches a struct array for a match\
 * returns a struct type function matching operator
 * @s: pointer to char - operator
 * Return: returns a pointer to a function
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
