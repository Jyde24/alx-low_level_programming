#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: a pointer to a pointer to a struct
 *
 * Return: a pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
