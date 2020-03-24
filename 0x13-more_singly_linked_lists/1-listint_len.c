#include "lists.h"

/**
 * listint_len - elements in a linked list
 * @h: head
 * Return: number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t i;


	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
