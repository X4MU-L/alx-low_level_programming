#include "lists.h"

/**
 * print_list - prints the strings in a linked list
 * @h: pointer to struct of list_t
 * Return: return the number of linked list in the list
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
