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
	int y;

	x = 0;
	if (*s)
	{
		x++;
		s++;
		y = (x + _strlen_recursion(s));

	}
	return (y);
}
