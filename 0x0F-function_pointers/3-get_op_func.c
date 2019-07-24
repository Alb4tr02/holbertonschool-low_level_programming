#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - return poiner to the function needed
 *
 * @s: poiner to the sign
 * Return: pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if ((*(ops[i].op) == *s) && (*(s + 1) == 0))
			return (*ops[i].f);
		i++;
	}
	return (NULL);
}
