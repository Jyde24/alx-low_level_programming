#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int x;

	x = 0;
	if (*s)
	{
		x++;
		s++;
		x = (x + _strlen_recursion(s));

	}
	return (x);
}
