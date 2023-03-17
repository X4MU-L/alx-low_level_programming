#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at a given index
 * in a doubly lineked list
 * @head: a pointer to a dlistint_t type
 * @index: index of node to delete, starts at 0
 * Return: returns 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	size_t node_len, i = 0;

	if (!head || !*head)
		return (-1);

	node_len = dlistint_len(*head);

	if (node_len == 0 || index > node_len - 1)
		return (-1);

	temp = *head;
	while (temp->prev != NULL)
		temp = temp->prev;

	if (index == 0)
	{
		if (temp->next)
			temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp)
	{
		if (index == i)
		{
			temp->prev->next = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;
			free(temp);
			break;
		}

		temp = temp->next;
		i++;
	}

	return (1);
}

/**
 * dlistint_len - gets the length of a doubly linked list forward
 * @h: struct to a doubly linked list
 * Return: length of linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (i);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
