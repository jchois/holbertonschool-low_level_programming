#include "lists.h"

/**
 * list_len - return the number of elements
 * in a linked list_len list.
 * @h: head
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
