#include "lists.h"
#include "string.h"
/**
 * add_node_end - adds a new node at the end  of a list_t list
 * @head: pointer to a pointer to a struct
 * @str: string to be copied
 *
 * Return: the address of new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *prvNode = *head;
	list_t *newNode;
	unsigned int x;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
		x = x + 1;
	newNode->str = strdup(str);
	newNode->len = x;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		while (prvNode->next != NULL)
			prvNode = prvNode->next;
		prvNode->next = newNode;
	}
	return (newNode);
}
