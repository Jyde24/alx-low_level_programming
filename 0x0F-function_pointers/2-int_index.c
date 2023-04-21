#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * int_index - fills memory with a constant byte
  * @array: is the array
  * @size: is the size of the array
  * @cmp: is funtion pointer
  * Return: a void pointer
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) == 1)
			return (x);
	}
	return (-1);

}
