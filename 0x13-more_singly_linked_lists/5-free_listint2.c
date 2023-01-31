#include "lists.h"

/**
 * free_listint2 - frees the memory used by listit
 * @head: pointer to a pointer to a struct listint
 * Return: returns the address of the newly created node
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while ((temp = *head) != NULL)
	{
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
