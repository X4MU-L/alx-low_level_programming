#include "lists.h"

/**
 * print_listint - prints the int of a linked list
 * @h: pointer to a struct listint
 * Return: returns the number of linked link
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
