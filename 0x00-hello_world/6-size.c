#include <stdio.h>
/**
*main - Print sizes of object types
*Return: Always 0
*/

int main(void)
{
	printf("size of char: %i byte(s)\n", (unsigned long)sizeof(char));
	printf("size of an int: %i byte(s)\n", (unsigned long)sizeof(int));
	printf("size of long int: %i byte(s)\n",
	(unsigned long)sizeof(long int));
	printf("size of long long int: %i byte(s)\n",
	(unsigned long)sizeof(long long int));
	printf("size of float: %i byte(s) \n", (unsigned long)sizeof(float));
	return (0);
}
