#include "search_algos.h"

/**
 * print_search_info - logs the search info of a search algorithm
 *
 * @array: - the array to print
 * @start: - the start of the array to print
 * @end: - the end of the array to print
 * Return: - returns 1 or 0
 */
int print_search_info(int *array, int start, int end)
{
	int i, flag = 0;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (!flag)
			printf("%d", array[i]);
		else if (flag)
			printf(", %d", array[i]);
		flag = 1;
	}
	printf("\n");
	return (0);
}

/**
 * binary_search - searches for a value in an array using a binary
 *                                                 search algorithm
 * @array: - the array to search linearly
 * @value: - the value to search for
 * @size:  - the size of the array
 * Return: - index of value if found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int end = size - 1;
	int mid;

	if (!array || (!*array && *array != 0))
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;
		print_search_info(array, start, end);
		if (array[mid] == value)
			return (array[mid]);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}

	return (-1);
}
