#include "main.h"
/**
 * _strstr -  Function that locates a substrin.
 * @haystack: Inputed string to be searched.
 * @needle: Substring to be located
 * Return: Success returns a pointer @ beginning of substring
 * while NULL is returned if unsuccessful.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}

		if (*y == '\0')
			return (haystack);
	}

	return (0);
}
