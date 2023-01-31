#include "lists.h"

/**
 * pop_listint - Delete the head of a linked list and returns it's data
 * @head: pointer to a pointer to a struct listint
 * Return: returns the data of the deleted head
 */

int pop_listint(listint_t **head)
{
	listint_t *temp, *temp2;
	int tmp_int;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	tmp_int = temp->n;
	temp2 = temp->next;
	*head = temp2;
	free(temp);

	return (tmp_int);
}
