#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number to flip
 * @m: number to get to
 *
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = 0;
	int count = 0;

	while (x < 64)
	{
		if ((n & 1) != (m & 1))
			count = count + 1;
			m = m >> 1;
			n = n >> 1;
			x = x + 1;
	}
	return (count);
}
