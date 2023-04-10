#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - The program prints a number, followed by a new line.
 * @argv: array of pointers to strings
 * @argc: number of arguments
 * Return: 0
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
