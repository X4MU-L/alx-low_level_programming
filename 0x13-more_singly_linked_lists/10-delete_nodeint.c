#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index
 * @head: pointer to a pointer to a struct listint
 * @index: index of node to delete
 * Return: returns 1 on success or -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < (index - 1); i++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);

	return (1);
}
