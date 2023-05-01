#include "lists.h"
/**
 * free_listint_safe - frees lists with a loop
 * @h: pointer to a pointer to a listint_t list
 *
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t count = 0;

	while (*h && ((*h)->next < *h))
	{
		temp = (*h)->next;
		count = count + 1;
		free(*h);
		*h = temp;
	}
	if (*h)
	{
		free(*h);
		count = count + 1;
	}
	*h = NULL;
	return (count);
}
