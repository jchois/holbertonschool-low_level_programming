#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at the given position
 * @h: head of the node.
 * @idx: index
 * @n: data to be inserted
 * Return: the address of the new node,
 *         or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *temp;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (i < idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = temp->next;
		new->next->prev = new;
		temp->next = new;
		new->prev = temp;
	}
	return (new);
}
