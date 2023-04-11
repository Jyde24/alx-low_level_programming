#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-D array of ints
 * @width: width of array, number of columns
 * @height: height of array, number of rows
 *
 * Return: pointer to 2-D array
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int x, y, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));
		if (p == NULL)
		{
			return (NULL);
		}
		for (x = 0; x < height; x++)
		{
			p[x] = malloc(width * sizeof(int));
			if (p[x] == NULL)
			{
				while (x >= 0)
				{
					free(p[x]);
					x = x - 1;
				}
				free(p);
				return (NULL);
			}
		}
		for (y = 0; y < height; y++)
		{
			for (z = 0; z < width; z++)
				p[y][z] = 0;
		}
		return (p);
}
