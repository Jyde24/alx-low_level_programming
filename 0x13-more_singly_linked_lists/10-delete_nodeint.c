#include "lists.h"
/**
 * listint_len - returns the number of elements in a linkedlisti\nt_t list
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
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: pointer to pointer to listint_t struct
 * @index: index of node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t len;
	unsigned int x;
	listint_t *prv_node = *head;
	listint_t *temp;

	len = listint_len(*head);
	if (index >= len)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (x = 0; x < index - 1; x = x + 1)
		prv_node = prv_node->next;
	temp = prv_node;
	prv_node = prv_node->next;
	temp->next = prv_node->next;
	free(prv_node);
	return (1);
}
