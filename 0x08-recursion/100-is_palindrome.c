#include "main.h"

int palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: returns 1 if it is, or 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @j: iterator
 * @k: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int palindrome(char *s, int j, int k)
{
	if (*(s + j) != *(s + k - 1))
		return (0);
	if (j >= k)
		return (1);
	return (palindrome(s, j + 1, k - 1));
}
