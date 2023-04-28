#include "lists.h"
#include "string.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to a struct
 * @str: string to be copied
 *
 * Return: the address of new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int x;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
		x = x + 1;
	new_node->str = strdup(str);
	new_node->len = x;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
