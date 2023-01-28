#include "lists.h"

/**
 * add_node - adds a node to the beggining of a linked list
 * @head: pointer to a pointer to struct of list_t
 * @str: string
 * Return: return a pointer to the added node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->len = _strlen(str);
	new->str = strdup(str);
	new->next = temp;
	*head = new;
	return (*head);
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
