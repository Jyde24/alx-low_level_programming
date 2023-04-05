#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @n: copy function for number of bytes
 * @dest: memory area where it is stored
 * @src: memory capacity in bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;
	r = 0;

	while (r < n)
	{
		dest[r] = src[r];
		r++;
	}
	return (dest);
}
