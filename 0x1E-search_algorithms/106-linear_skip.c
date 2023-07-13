#include "search_algos.h"

skiplist_t *get_skiplist_express(skiplist_t *list, size_t bound);
skiplist_t *get_skiplist_index(skiplist_t *list, size_t bound);
skiplist_t *get_skiplist_value(skiplist_t *node, size_t start, int value);

/**
 * linear_skip - searches a skiplist linked list for @value
 *				 using the express lane of index sqrt(size).
 *
 * @list: - the skiplist to search for @value
 * @value: - the value to search for in skiplist
 * Return: - returns the node of value if found else NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t bound, temp_bound, i = 0;
	skiplist_t *head, *temp;

	if (!list)
		return (NULL);

	head = list;
	temp_bound = bound = list->express->index;
	while (head->next != NULL)
	{
		/* save a temp position of list */
		temp = head;
		/* get the node at index of bound if any else return last node*/
		head = get_skiplist_express(head, bound);
		/* print message index with bound if less than size - 1 */
		bound = !head->next ? head->index : bound;
		if (head->next)
			printf("Value checked at index [%ld] = [%d]\n", bound,
			       head->n);
		/*
		 * if node->next is NULL, end of list - print area and rest
		 * of the list
		 * if node->n is greater than value, bound found, use temp
		 * to get value
		 */
		if (!head->next || (head && head->n >= value))
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       i, bound);
			/* return node if value is found else NULL */
			return (get_skiplist_value(temp, i, value));
		}
		/* save bound previous position */
		i = bound;
		/* increament bound by square root */
		bound += temp_bound;
	}

	return (NULL);
}


/**
 * get_skiplist_express - get the next express node else recursively
 *						  get the low level node whose index equals @bound.
 *
 * @list: - the skiplist to get express or index @bound
 * @bound: - the index of node in skiplist
 * Return: - returns next express node or node at @bound else last node
 */
skiplist_t *get_skiplist_express(skiplist_t *list, size_t bound)
{
	/* if node is last node return node */
	if (!list->express)
		return (get_skiplist_index(list, bound));

	return (list->express);
}

/**
 * get_skiplist_index - recursively get the node at the index @bound
 *
 * @list: - the skiplist to get node at index @bound
 * @bound: - the index of node in @list seeked
 * Return: - returns node at @bound else last node
 */

skiplist_t *get_skiplist_index(skiplist_t *list, size_t bound)
{
	/* if node is last node return node */
	if (!list->next)
		return (list);
	if (list->index == bound)
		return (list);
	return (get_skiplist_index(list->next, bound));
}

/**
 * get_skiplist_value - get the node of @value in a bound if found
 *                  return the node else NULL.
 * @start: - start index of bound to search for node
 * @node: - head of node to search for @value
 * @value: - the value to search for in the list
 * Return: returns the node where @value is located else NULL if not found
 */
skiplist_t *get_skiplist_value(skiplist_t *node, size_t start, int value)
{
	if (!node)
		return (NULL);

	for (; node != NULL; start++, node = node->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", start, node->n);
		if (node->n == value)
			return (node);
	}
	return (NULL);
}
