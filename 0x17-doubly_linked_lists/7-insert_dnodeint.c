#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert node at a given index
 * in a doubly lineked list
 * @h: a pointer to a dlistint_t type
 * @idx: index of node to insert at, starts at 0
 * @n: int data
 * Return: node at given index
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head, *temp;
	size_t node_len, i = 0;

	node_len = dlistint_len(*h);
	if (!h || idx > node_len || (!*h && idx > 0))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == node_len)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	head  = temp = *h;
	while (head->prev != NULL)
		head = head->prev;

	while (head)
	{
		if (idx == i)
		{
			new->prev = head->prev;
			new->next = head;
			head->prev->next = new;
			head->prev = new;
			*h = temp;
			break;
		}

		head = head->next;
		i++;
	}

	return (new);
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
