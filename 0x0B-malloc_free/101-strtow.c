#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flg = 0, x = 0, y;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] == ' ')
			flg = 0;
		else if (flg == 0)
		{
			flg = 1;
			x++;
		}
	}

	return (x);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **mtrx, *tmp;
	int a, b, c, length, words, start, end;

	b = 0, length = 0, c = 0;

	while (*(str + length))
		length = 1 + length;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	mtrx = (char **) malloc(sizeof(char *) * (words + 1));
	if (mtrx == NULL)
		return (NULL);
	for (a = 0; a <= length; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				mtrx[b] = tmp - c;
				b = b + 1, c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}
	mtrx[b] = NULL;
	return (mtrx);
}
