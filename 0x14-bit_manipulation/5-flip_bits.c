#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number to flip
 * @m: number to get to
 *
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{	
	unsigned int counter = 0;
	unsigned long int zor = n ^ m;

	while (zor)
	{
		if (zor & 1)
			counter = counter + 1;
	 	zor >>= 1;
	}
	return (counter);
}
