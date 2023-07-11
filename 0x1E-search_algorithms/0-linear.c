#include "search_algos.h"


/**
 * print_search_info - logs the search info of a search algorithm
 *
 * @index: - index of an array search
 * @value: - the value at @index
 * @flag: - a 1 or 0 flag
 * Return: - returns 1 or 0
 */
int print_search_info(size_t index, size_t value, int flag)
{
	if (flag)
		return (1);
	printf("Value checked array[%ld] = [%ld]\n", index, value);
	return (0);
}

/**
 * linear_search - searches for a value in an array using a linear
 *                                                 search algorithm
 * @array: - the array to search linearly
 * @value: - the value to search for
 * @size:  - the size of the array
 * Return: - index of value if found else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || (!*array && *array != 0))
		return (-1);
	for (i = 0; i < size; i++)
		if (print_search_info(i, array[i], (array[i] == value)))
			return (i);
	return (-1);
}
