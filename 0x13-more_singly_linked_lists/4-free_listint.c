#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a variable pointing to a struct of type listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
