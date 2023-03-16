#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: a pointer to a dlistint_t type
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head)
		while (head->prev != NULL)
			head = head->prev;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
