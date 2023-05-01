#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: a variable that points to a pointer which points to a struct
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count = count + 1;
		h = h->next;
	}
	return (count);
}
