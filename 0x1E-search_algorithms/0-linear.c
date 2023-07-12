#include "search_algos.h"

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
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
