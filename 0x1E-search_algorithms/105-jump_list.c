#include "search_algos.h"
#include <math.h>

listint_t *get_jump_index(listint_t *list, size_t bound);
listint_t *get_jump_value(listint_t *node, size_t start,
			  size_t size, int value);

/**
 * jump_list - searches a linked list for @value using a bound
 *             (sqrt of length) to increment position and linearly
 *             search for @value if bound is extablished.
 * @list: - the linked list to search for @value in
 * @size: - the size of the linked list
 * @value: - the value to search for in the linked list
 * Return: - returns the node of the value else NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t bound, temp_bound, i = 0;
	listint_t *head, *temp;

	if (!list || size <= 0)
		return (NULL);

	bound = temp_bound = sqrt(size);
	head = list;
	while (head->next != NULL)
	{
		/* save a temp position of list */
		temp = head;
		/* get the node at index of bound if any else NULL*/
		head = get_jump_index(head, bound);
		/* if node exist print message */
		if (head)
			printf("Value checked at index [%ld] = [%d]\n", bound,
			       head->n);
		/*
		 * if node does not exits, end of list - print area and rest
		 * of the list
		 * if node->n is greater than value, bound found, use temp
		 * to get value
		 */
		if (!head || (head && head->n >= value))
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       i, bound >= size ? size - 1 : bound);
			return (get_jump_value(temp, i, size, value));
		}
		/* save bound previous position */
		i = bound;
		/* increament bound by square root */
		bound += temp_bound;
	}
	return (NULL);
}

/**
 * get_jump_index - recursively get the node at the index @bound
 *
 * @list: - the linked list get node at index @bound
 * @bound: - the index of node in @list seeked
 * Return: returns the node at index @bound else NULL if node is exhusted
 */
listint_t *get_jump_index(listint_t *list, size_t bound)
{
	if (!list)
		return (NULL);
	if (list->index == bound)
		return (list);
	return (get_jump_index(list->next, bound));
}

/**
 * get_jump_value - get the node of @value in a bound if found
 *                  return the node else NULL.
 * @start: - start index of bound to search for node
 * @node: - head of node to search for @value
 * @value: - the value to search for in the list
 * @size: - the size of the linked list
 * Return: returns the node where @value is located else NULL if not found
 */
listint_t *get_jump_value(listint_t *node, size_t start,
			  size_t size, int value)
{
	if (!node)
		return (NULL);

	for (; start < size && node != NULL; start++, node = node->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", start, node->n);
		if (node->n == value)
			return (node);
	}
	return (NULL);
}
