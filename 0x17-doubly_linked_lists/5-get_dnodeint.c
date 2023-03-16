#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at a particular
 * index in a doubly lineked list
 * @head: a pointer to a dlistint_t type
 * @index: index of node to return, starts at 0
 * Return: node at given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head)
		while (head->prev != NULL)
			head = head->prev;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (head);
}
