#include "lists.h"

/**
 * insert_nodeint_at_index - sum all the data of a linked list
 * @head: pointer to a pointer to a struct listint
 * @idx: index at which to insert
 * @n: int
 * Return: returns the address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (*head == NULL && idx != 0)
		return (NULL);
	temp = *head;
	if (idx != 0)
	{
		for (i = 0; temp != NULL && i < (idx - 1); i++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}

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
