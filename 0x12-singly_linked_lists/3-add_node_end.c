#include "lists.h"

/**
 *add_node_end - Add a new node
 *@head: head of pointer
 *@str: string
 *Return: addres
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i;

	list_t *new_node;
	list_t *last;

	i = 0;

	if (!str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	last = *head;

	if (new_node == NULL)
		return (NULL);

	while (str[i] != 0)
		i++;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
