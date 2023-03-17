#include "lists.h"

/**
 * add_dnodeint - add a node to the beginning of a doubly
 * linked list
 * @head: a pointer to a dlistint_t type
 * @n: int
 * Return: pointer to new node added
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;

	if (!*head)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while ((*head)->prev)
		*head = (*head)->prev;
	(*head)->prev = new;
	new->next = *head;
	*head = new;

	return (new);
}
