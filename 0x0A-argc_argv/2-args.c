#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - The program prints all the arguments it receives
 * @argv: array of pointers to strings
 * @argc: number of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a = 0;

	while (a < argc)
	{
		printf("%s\n", argv[a]);
		a = a + 1;
	}
	return (0);
}
