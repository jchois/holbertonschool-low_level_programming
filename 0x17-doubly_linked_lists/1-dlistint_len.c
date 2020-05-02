#include "lists.h"

/*
 * dlistint_len - elements in a linked list
 * @h: head
 * Return: elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
