#include "lists.h"

/**
 * dlistint_len - gets the length of a doubly linked list forward
 * @h: struct to a doubly linked list
 * Return: length of linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *head;
	size_t i = 0;

	head = (dlistint_t *)h;

	if (!head)
		return (i);

	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}
