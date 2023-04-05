#include "main.h"
/**
 * _strchr -  a function that locates a character in a string
 * @s: inputed string to be searched
 * @c: char to be located
 * Return: Success returns char c while NULL is returned when unsuccessful
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return (0);
}
