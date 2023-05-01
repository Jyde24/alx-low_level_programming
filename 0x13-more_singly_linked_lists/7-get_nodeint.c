#include "lists.h"
/**
 * listint_len - returns the number of elements in a linkedlisti\
nt_t list
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
 * get_nodeint_at_index - returns the nth node of listint_t list
 * @head: a variable pointing to a struct
 * @index: index of node, starting from 0
 *
 * Return: a variable pointing to a struct
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	size_t len;

	len = listint_len(head);
	if (index > len)
		return (NULL);
	for (x = 0; x < index; x = x + 1)
		head = head->next;
	return (head);
}
