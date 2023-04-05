#include "main.h"

/**
 * *_memset - This Function fills the block of memory with a specific byte
 *@b : constant byte to be copied
 *@s : the memory address to be filled
 *@n : number of times memory bytes will be filled
 * Return: pointer to memory area s will be returned
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
