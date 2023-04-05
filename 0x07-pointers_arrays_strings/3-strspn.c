#include "main.h"
/**
 * _strspn - Function that gets the length of a prefix substring.
 * @s: inputed string that will be searched.
 * @accept: Prefix to be measured.
 * Return: returns number of @accept bytes from s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				n++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
