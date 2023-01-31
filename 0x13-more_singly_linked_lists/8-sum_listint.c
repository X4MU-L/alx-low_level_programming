#include "lists.h"

/**
 * sum_listint - sum all the data of a linked list
 * @head: pointer to a pointer to a struct listint
 * Return: returns the sum of all the data
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
