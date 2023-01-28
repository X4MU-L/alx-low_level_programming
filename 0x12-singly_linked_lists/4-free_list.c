#include "lists.h"

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: pointer to a pointer to struct of list_t
 * @str: string
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
