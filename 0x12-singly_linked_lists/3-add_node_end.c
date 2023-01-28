#include "lists.h"

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: pointer to a pointer to struct of list_t
 * @str: string
 * Return: return a pointer to the added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->len = _strlen(str);
	new->str = strdup(str);
	new->next = NULL;

	if (temp == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
