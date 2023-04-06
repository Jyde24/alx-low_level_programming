#include "main.h"

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 * @r: args
 * Return: 1 if n is a prime number, 0 if not
 */

int primeN(int n, int r);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primeN(n, n - 1));
}

/**
 * primeN - calculates if a number is prime recursively
 * @n: number to evaluate
 * @r: iterator
 * Return: 1 if n is prime, 0 if not
 */
int primeN(int n, int r)
{
	if (r == 1)
		return (1);
	if (n % r == 0 && r > 0)
		return (0);
	return (primeN(n, r - 1));
}
