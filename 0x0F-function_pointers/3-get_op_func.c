#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * get_op_func - print the name of this function
  * @s: has the length of the arguments
  * Return: 0 to indicate a good working of the program
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
	int x;

	x = 0;

	while (x < 5)
	{
		if ((ops[x].op[0]) == *s)
			return (ops[x].f);
		x = x + 1;
	}

	return (NULL);

}
