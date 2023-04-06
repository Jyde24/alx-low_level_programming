#include "main.h"

/**
 * _pow_recursion -Function that returns the value of num raised to a power
 * @x: the number to be raise
 * @y: the power number
 *
 * Return: returns the power result
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}

