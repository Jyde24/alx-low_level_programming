#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *inarr;
	int x, y, count;

	if (min > max)
		return (NULL);
	 count = ((max - min) + 1);
	inarr = malloc(count * sizeof(int));
	if (inarr == NULL)
		return (NULL);
	y = min;
	for (x = 0; x < count; x++, y++)
		inarr[x] = y;
	return (inarr);
}
