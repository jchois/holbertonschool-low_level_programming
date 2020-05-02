#include "lists.h"

/**
 * void free_dlistint -
 * @head: head oh the list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
