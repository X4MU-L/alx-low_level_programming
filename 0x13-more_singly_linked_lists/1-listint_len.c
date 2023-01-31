#include "lists.h"

/**
 * listint_len - gets the length of a linked list
 * @h: pointer to a struct listint
 * Return: returns the number of linked link
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
