#include "main.h"

/**
 * _memset - This Function fills the block of memory with a specific value
 *@s : specific value
 *@b : the memory address to be filled with v
 *@n : size of memory bytes that will be filled
 * Return: array of new value will be returned
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
