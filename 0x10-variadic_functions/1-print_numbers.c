#include "variadic_functions.h"

/**
  * print_numbers - fills memory with a constant byte
  * @separator: is string
  * @n: the amount of args
  * Return: nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list gett;
	unsigned int x;

	va_start(gett, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(gett, int));
		if (separator != NULL && x != n - 1)
			printf("%s", separator);
	}
	va_end(gett);
	printf("\n");
}
