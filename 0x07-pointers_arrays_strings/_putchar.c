#include "main.h"
#include <unistd.h>

/**
 * _putchar writes the char c to stdout
 *@c : The char to be printed
 * Return: returns 1 on success
 * on error : returns -1 or error message
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
