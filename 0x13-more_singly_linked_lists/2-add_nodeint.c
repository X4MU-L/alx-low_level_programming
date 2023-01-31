#include "lists.h"

/**
 * add_nodeint - create a new node to a single linked list
 * @head: pointer to a pointer to a struct listint
 * @n: int
 * Return: returns the address of the newly created node
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
