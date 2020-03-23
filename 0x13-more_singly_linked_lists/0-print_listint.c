#include "lists.h"

/**
 * print_listint - prints all elements of list
 * @h: head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}

	return (i);
}