#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to memory previously allocated
 * @old_size: size (in bytes) allocated for ptr
 * @new_size: size (in bytes) of new memory block
 *
 * Return: pointer to void, null, or 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	_memcpy(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);
}
/**
 * _memcpy - copies memory area
 * @dest: character array to copy to
 * @src: character array to copy from
 * @n: how many bytes to copy
 * Return: the pointer to the char array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
