#include "lists.h"

/**
 * listint_len - gets the length of a linked list
 * @h: pointer to a struct listint
 * Return: returns the number of linked link
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
