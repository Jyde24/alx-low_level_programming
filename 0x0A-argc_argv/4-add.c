#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program adds positive numbers.
 * @argv: array of pointers to strings
 * @argc: number of argument
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int a, b, c;
	int sum = 0;

	for (b = 1; *argv + b != argv[argc]; b++)
	{
		for (c = 0; **argv + c != '\0'; c++)
		{
			if (**argv + c <= '0'
			    && **argv + c >= '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (a = 1; a < argc; a++)
	{
		if (atoi(argv[a]) == 0)
		{
			printf("Error\n");
			return (1);
			}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
