#include "lists.h"

/**
 * insert_nodeint_at_index - sum all the data of a linked list
 * @head: pointer to a pointer to a struct listint
 * Return: returns the sum of all the data
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int len, i;

	if (head == NULL)
		return (NULL);

	temp = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (temp == NULL && idx == 0)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	if (temp != NULL && idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}
	len = (unsigned int)listint_len(temp);
	for (i = 0; temp->next != NULL && i < (idx - 1) && i < len; i++)
	{
		temp = temp->next;
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
