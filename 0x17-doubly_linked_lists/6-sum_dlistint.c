#include "lists.h"

/**
 * sum_dlistint - sums the data in a doubly linked list
 * @head: a pointer to a dlistint_t type
 * Return: sum of all data in a the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
		while (head->prev != NULL)
			head = head->prev;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
