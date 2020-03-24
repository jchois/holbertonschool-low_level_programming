#include "lists.h"

/**
 * add_nodeint -add new node at the beggining
 * @head: head of list
 * @n: int
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (new);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
