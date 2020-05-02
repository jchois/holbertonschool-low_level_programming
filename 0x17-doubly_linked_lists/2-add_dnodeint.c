#include "lists.h"

/**
 * add_dnodeint - add new node at the beggining
 * @head: head of the list
 * @n: new node
 * Return: address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node =  malloc(sizeof(dlistint_t));
	temp = *head;
	if (new_node == NULL)
		return (NULL);
	*head = new_node;
	new_node->n = n;
	new_node->prev = NULL;
	if (temp == NULL)
		new_node->next = NULL;
	else
	{
		new_node->next = temp;
		temp->prev = *head;
	}
	*head = new_node;
	return (new_node);
}

