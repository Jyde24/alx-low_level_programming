#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */

int squareroot(int, int);

int _sqrt_recursion(int n)
{
	return (squareroot(n, 1));
}

/**
 * squareroot - recursive square root of a number
 * @n: number for square root calculatation
 * @i: iterator
 * Return: returns the resulting square root
 */
int squareroot(int n, int i)
{
	int sqr = i * i;

	if (sqr > n)
		return (-1);
	if (sqr == n)
		return (i);
	return (squareroot(n, i + 1));
}
