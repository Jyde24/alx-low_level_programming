#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - This program adds positive numbers.
 * @argv: array of pointers to strings
 * @argc: number of argument
 * Return: returns 0 for integer or 1 for non-integers
 */


int main(int argc, char *argv[])
{
	int a, b, len, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (a = 1; a < argc; a++)
		{
			ptr = argv[a];
			len = strlen(ptr);

			for (b = 0; b < len; b++)
			{
				if (isdigit(*(ptr + b)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum = sum + atoi(argv[a]);
		}

	printf("%d\n", sum);
	}
	return (0);
}
