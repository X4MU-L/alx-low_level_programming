#include "lists.h"

/**
 * get_nodeint_at_index - gets the address of node at index
 * @head: pointer to a pointer to a struct listint
 * @index: index of node to get
 * Return: returns the address of node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (i = 0; i < index && temp != NULL; i++)
		temp = temp->next;

	return (temp);
}
