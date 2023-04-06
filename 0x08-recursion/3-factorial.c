#include "main.h"

/**
 * factorial - Function that returns the factorial of a number
 * @n: number for factorial
 *
 * Return: returns an integer which is factorial of number n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
