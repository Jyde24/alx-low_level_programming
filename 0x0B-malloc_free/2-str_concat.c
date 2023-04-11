#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int totalLength, w, x, y, z;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = 0;
	while (*(s1 + x) != '\0')
	{
		len1 = len1 + 1;
		x = x + 1;
	}
	y = 0;
	while (*(s2 + y) != '\0')
	{
		len2 = len2 + 1;
		y = y + 1;
	}
	totalLength = len1 + len2;
	p = malloc((totalLength + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	w = 0;
	while (w < len1)
	{
		*(p + w) = *(s1 + w);
		w = w + 1;
	}
	x = len1;
	z = 0;
	while (x < totalLength)
	{
		*(p + x) = *(s2 + z);
		x = x + 1;
		z = z + 1;
	}
	*(p + totalLength) = '\0';
	return (p);
}
