#include "lists.h"

/**
 * add_dnodeint_end - add a node to the end of a doubly
 * linked list
 * @head: a pointer to a dlistint_t type
 * @n: int
 * Return: pointer to new node added
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	h = *head;
	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = *head;
		*head = new;
		return (new);
	}

	while ((*head)->next)
		*head = (*head)->next;
	new->prev = *head;
	(*head)->next = new;
	*head = h;

	return (new);
}
