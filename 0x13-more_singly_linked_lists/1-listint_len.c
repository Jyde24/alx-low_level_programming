#include "lists.h"

/**
 * listint_len - returns the number of elements in a linkedlistint_t list
 * @h: a variable that points to a listint_t struct
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count = count + 1;
		h = h->next;
	}
	return (count);
}
