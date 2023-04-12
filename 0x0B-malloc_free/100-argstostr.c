#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: pointer to pointer to first element in array of pointers
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int length = 0;
	int a, b, c, d, e;

	if (ac == 0 || av ==  NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			length = length + 1;
	}
	p = malloc((length + (ac + 1)) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	c = 0;
	e = 0;
	d = 0;
	while (c < length + ac)
	{
		if (av[e][d] != '\0')
		{
			p[c] = av[e][d];
			c = c + 1;
			d = d + 1;
		}
		else
		{
			p[c] = '\n';
			e = e + 1;
			c = c + 1;
			d = 0;
		}
	}
		p[c] = '\0';
		return (p);
}
