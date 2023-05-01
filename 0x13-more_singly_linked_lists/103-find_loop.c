#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to a listint_t list
 *
 * Return: the address of the node where loop starts or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slw = head;
	listint_t *fst = head;

	while (slw && fst && fst->next)
	{
		slw = slw->next;
		fst = fst->next->next;
		if (slw == fst)
		{
			slw = head;
			while (slw != fst)
			{
				slw = slw->next;
				fst = fst->next;
			}
			return (slw);
		}
	}
	return (NULL);
}
