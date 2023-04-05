#include "main.h"
/**
 * print_chessboard - Function that prints the chessboard.
 * @a: Pointer to all the pieces to be printed
 * Return: no return (void).
 */
void print_chessboard(char (*a)[8])
{
	int x;

	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
