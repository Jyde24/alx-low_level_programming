#include "main.h"

/**
 * set_string - The function sets the value of a pointer to a char.
 * @s: pointer to pointer
 * @to: The pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
