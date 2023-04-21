#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * op_add - print the name of this function
  * @a: has the length of the arguments
  * @b: has the arguments
  * Return: 0 to indicate a good working of the program
  */
int op_add(int x, int y)
{
	return (x + y);
}
/**
  * op_sub - print the name of this function
  * @a: has the length of the arguments
  * @b: has the arguments
  * Return: 0 to indicate a good working of the program
  */
int op_sub(int x, int y)
{
	return (x - y);
}
/**
  * op_mul - print the name of this function
  * @a: has the length of the arguments
  * @b: has the arguments
  * Return: 0 to indicate a good working of the program
  */
int op_mul(int x, int y)
{
	return (x * y);
}
/**
  * op_div - print the name of this function
  * @a: has the length of the arguments
  * @b: has the arguments
  * Return: 0 to indicate a good working of the program
  */
int op_div(int x, int y)
{
	if (y != 0)
		return (x / y);
	printf("Error\n");
	exit(100);
}
/**
  * op_mod - print the name of this function
  * @a: has the length of the arguments
  * @b: has the arguments
  * Return: 0 to indicate a good working of the program
  */
int op_mod(int x, int y)
{
	if (y != 0)
		return (x % y);
	printf("Error\n");
	exit(100);
}
