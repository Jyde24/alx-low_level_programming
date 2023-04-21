#include "variadic_functions.h"

/**
  * print_strings - fills memory with a constant byte
  * @separator: is string
  * @n: the amount of args
  * Return: nothing
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list gett;
	unsigned int x;
	char *str;

	va_start(gett, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(gett, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && x != n - 1)
			printf("%s", separator);
	}
	va_end(gett);
	printf("\n");
}
