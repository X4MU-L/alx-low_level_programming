#include "lists.h"

/**
 * print_listint_safe - prints a linked list safely without chasing tails
 * @head: pointer to the first node in the list
 * Return: number of list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		len++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next,
			       head->next->n);
			break;
		}
	}

	return (len);
}
