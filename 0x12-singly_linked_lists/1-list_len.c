#include "lists.h"

/**
 * list_len - returns the number of elemts in a linked list
 * @h: pointer to struct of list_t
 * Return: return the number of linked list in the list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
