#include "lists.h"

/**
 * sum_listint - Return the sum of all the data
 * @head: variable that points to a struct
 *
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum_of_data = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum_of_data += head->n;
		head = head->next;
	}
	return (sum_of_data);
}
