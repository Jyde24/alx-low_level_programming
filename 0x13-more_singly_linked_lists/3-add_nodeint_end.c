#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of listint_t list
 * @head: pointer to pointer to struct
 * @n: value of n member of new node
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *prv_node = *head;
	listint_t *nw_node;

	nw_node = malloc(sizeof(listint_t));
	if (nw_node == NULL)
		return (NULL);
	nw_node->n = n;
	nw_node->next = NULL;
	if (*head == NULL)
	{
		*head = nw_node;
		return (nw_node);
	}
	else
	{
		while (prv_node->next != NULL)
			prv_node = prv_node->next;
		prv_node->next = nw_node;
	}
	return (nw_node);
}
