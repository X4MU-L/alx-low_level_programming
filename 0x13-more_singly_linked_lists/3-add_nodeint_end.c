#include "lists.h"

/**
 * add_nodeint_end - add a new node to end of a single linked list
 * @head: pointer to a pointer to a struct listint
 * @n: int
 * Return: returns the address of the newly created node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (temp == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;

	return (new);
}
