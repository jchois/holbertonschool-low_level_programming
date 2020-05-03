#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: index of the node.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *tmp_head;

	if (head != NULL || *head != NULL)
		return (-1);

	tmp_head = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(tmp_head);
		return (1);
	}
	for ( ; index > 1 && tmp_head != NULL && tmp_head->next != NULL; index--)
		tmp_head = tmp_head->next;

	if (!tmp_head)
		return (-1);

	tmp = tmp_head->next;
	tmp_head->next = tmp->next ? tmp->next : NULL;

	if (tmp->next != NULL)
		tmp->next->prev = tmp_head;
	free(tmp);
	return (1);
}
