#include "lists.h"

/**
 * print_dlistint - print items from a doubly linked list forward
 * @h: struct to a doubly linked list
 * Return: length of linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *head;
	size_t i = 0;

	head = (dlistint_t *)h;

	if (!head)
		return (i);

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		i++;
	}
	return (i);
}
