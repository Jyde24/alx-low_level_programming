#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: The length of the string
 */
int _strlen(const char *s)
{
	int p = 0;

	while (s[p] != '\0')
		p = p + 1;
	return (p);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int exp = 0;
	int sum = 0;
	int len = 0;
	int x;

	if (!b)
		return (0);
	len = _strlen(b);
	for (x = len - 1; x >= 0; exp = exp + 1, x--)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		if (b[x] == '1')
			sum += 1 << (exp);
	}
	return (sum);
}
