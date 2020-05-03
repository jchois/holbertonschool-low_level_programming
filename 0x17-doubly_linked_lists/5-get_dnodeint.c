#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a ll
 * @head: head of the list
 * @index: position
 * Return: address of node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);

		head = head->next;
	}
	return (NULL);
}
