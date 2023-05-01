#include "lists.h"
/**
 * listint_len - returns the number of elements in a linkedlisti\nt_t list
* @h: a variable that points to a listint_t struct
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: pointer to pointer to struct
 * @idx: index of list where new node should be added
 * @n: value of n member for new node
 *
 * Return: adress of new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t len;
	unsigned int x;
	listint_t *nw_node;
	listint_t *prv_node = *head;

	len = listint_len(*head);
		if (idx > len)
			return (NULL);
		nw_node = malloc(sizeof(listint_t));
		if (nw_node == NULL)
			return (NULL);
		nw_node->n = n;
		if (idx == 0)
		{
			nw_node->next = *head;
			*head = nw_node;
			return (nw_node);
		}
		for (x = 0; x < idx - 1; x = x + 1)
			prv_node = prv_node->next;
		nw_node->next = prv_node->next;
		prv_node->next = nw_node;
		return (nw_node);
}
