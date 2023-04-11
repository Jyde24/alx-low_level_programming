#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: pointer to new string or NULL
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int len = 0;
	unsigned int x, y;

	if (str == NULL)
		return (NULL);
	y = 0;
	while (*(str + y) != '\0')
	{
		len = len + 1;
		y = y + 1;
	}
	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	x = 0;
	while (x < len)
	{
		*(p + x) = *(str + x);
		x = x + 1;
	}
	*(p + len) = '\0';
	return (p);
}
