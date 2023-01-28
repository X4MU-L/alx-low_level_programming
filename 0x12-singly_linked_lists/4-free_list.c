#include "lists.h"

/**
 * free_list - frees the memory used by a linked list
 * @head: pointer to struct of list_t
 * Return: return a pointer to the added node
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while ((temp = head) != NULL)
	{
		head = temp->next;
		free(temp->str);
		free(temp);
	}
}
