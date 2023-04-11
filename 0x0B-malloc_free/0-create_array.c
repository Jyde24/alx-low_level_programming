#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars and initializes it
 * @size: size of array
 * @c: specific character to initialize the array with
 * Return: returns pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int x;

	if (size == 0)
		return (NULL);
	p = malloc(size * sizeof(c));
	if (p == NULL)
		return (NULL);
	x = 0;
	while (x < size)
	{
		*(p + x) = c;
		x = x + 1;
	}
	return (p);
}
