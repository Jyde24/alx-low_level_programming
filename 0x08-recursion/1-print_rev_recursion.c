#include "main.h"

/**
  * _print_rev_recursion - function that prints a string in reverse.
  * @s: The string parameter to be reversed
  * Return: returns zero.
  */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
