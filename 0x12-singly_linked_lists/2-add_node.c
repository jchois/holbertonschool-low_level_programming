#include "lists.h"

/**
 * add_node - add a new node at the beggining
 * of a list_t list.
 * @head: double pointer
 * @str: string to be duplicated
 * Return: addres of the new element otherwise NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_node;

	i = 0;

	if (!str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[i] != 0)
		i++;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
