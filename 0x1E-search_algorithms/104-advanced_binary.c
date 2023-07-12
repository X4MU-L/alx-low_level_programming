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
	for (i = start; i < end; i++)
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
 * recursive_binary_search - searches for a value in an array
 *                           using a recursive binary search
 *                           algorithm.
 * Description: - this recursive binary search algorithm searches
 *                for the value in array and returns it's first
 *                occurances if any using a divide and conquer
 *                algorithm.
 * @array: - the array to search recursively
 * @value: - the value to search for
 * @start: - the start of the array to print
 * @end: - the end of the array to print
 * Return: - index of value if found else -1
 */
int recursive_binary_search(int *array, int start, int end, int value)
{
	int mid = ((start + end) / 2);

	if (start > end)
		return (-1);

	print_search_info(array, start, end + 1);

	if (array[mid] < value)
		/* search from the middle of array */
		return (recursive_binary_search(array, mid + 1, end, value));
	else if (array[mid] > value)
		/* search from the begining of array */
		return (recursive_binary_search(array, start, mid - 1, value));
	else if (array[mid] == value && start == 0)
		/* check for possible first value in array */
		return (recursive_binary_search(array, start, mid, value));
	else
		return (mid);
}

/**
 * advanced_binary - searches for a value in an array using a
 *                   recursive binary search algorithm
 * Description: - this recursive binary search algorithm
 *                searches for the value in array and returns
 *                it's first occurances if any using a divide
 *                and conquer algorithm.
 * @array: - the array to search recursively
 * @value: - the value to search for
 * @size:  - the size of the array
 * Return: - index of value if found else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (recursive_binary_search(array, 0, (int) size - 1, value));
}
