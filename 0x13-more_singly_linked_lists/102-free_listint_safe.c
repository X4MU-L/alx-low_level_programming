#include "lists.h"

/**
 * free_listint_safe - frees a linked list safely without chasing tails
 * @head: pointer to a pointer to the first node in the list
 * Return: number of list
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *temp;
	size_t len = 0;
	long int diff;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		diff = *head - (*head)->next;
		temp = (*head)->next;
		free(*head);
		len++;

		if (diff > 0)
			*head = temp;
		else
		{
			*head = NULL;
			break;
		}
	}

	*head = NULL;
	return (len);
}
