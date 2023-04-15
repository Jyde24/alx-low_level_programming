#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _strlen(char *s);
/**
 * string_nconcat - concatenates two strings
 * @s1: first strings
 * @s2: second string
 * @n: number of bytes to add from s2
 *
 * Return: pointer to newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mptr;
	unsigned int a, b, c, d, e, totalLen;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	totalLen = len1 + len2;
	if (n >= len2)
		mptr = malloc((totalLen + 1) * sizeof(char));
	else
		mptr = malloc((len1 + n + 1) * sizeof(char));
	if (mptr == NULL)
		return (NULL);
	d = 0;
	while (d < len1)
	{
		*(mptr + d) = *(s1 + d);
		d = d + 1;
	}
	if (n >= len2)
	{
		a = len1;
		e = 0;
		while (a < totalLen)
		{
			*(mptr + a) = *(s2 + e);
			a = a + 1;
			e = e + 1;
		}
		*(mptr + a) = '\0';
	}
	else
	{
		b = len1;
		c = 0;
		while (c < n)
		{
			*(mptr + b) = *(s2 + c);
			b = b + 1;
			c = c + 1;
		}
		*(mptr + b) = '\0';
	}
	return (mptr);
}
/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i = i + 1;
	return (i);
}
