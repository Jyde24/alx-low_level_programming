#include "lists.h"

/**
 * pop_listint - deletes head node.  Returns head node's data
 * @head: pointer to a pointer to a struct
 *
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int temp;
	listint_t *hdRef;

	if (*head == NULL)
		return (0);
	hdRef = (*head)->next;
	temp = (*head)->n;
	free(*head);
	*head = hdRef;
	return (temp);
}
