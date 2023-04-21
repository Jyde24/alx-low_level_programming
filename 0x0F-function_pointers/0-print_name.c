#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function to print name
 * @name: parameter
 * @f: parameter
 *
 * Return 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	else
		f(name);
}
