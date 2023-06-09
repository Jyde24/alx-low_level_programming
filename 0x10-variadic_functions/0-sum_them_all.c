#include "variadic_functions.h"

/**
  * sum_them_all - fills memory with a constant byte
  * @n: the amount of args
  * Return: the sum of all arg recibe
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list gett;
	unsigned int x;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(gett, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(gett, int);
	}
	va_end(gett);
	return (sum);
}
