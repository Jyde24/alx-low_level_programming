#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int x, y;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (x = 63; x >= 0; x--)
	{
		y = n >> x;
		if (y & 1)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1)
			_putchar('0');
	}
}
