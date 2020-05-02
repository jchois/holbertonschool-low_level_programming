#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @head: head of list
 * @n: asd
 * Return: address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end;
	dlistint_t *temp;

	end = malloc(sizeof(dlistint_t));
	temp = *head;
	if (end == NULL)
		return (NULL);

	end->n = n;
	end->next = NULL;
	if (temp == NULL)
	{
		*head = end;
		end->prev = NULL;
	}
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = end;
		end->prev = temp;
	}
	return (end);
}
