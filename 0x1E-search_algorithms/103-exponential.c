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
 * binary_search_interpolation - searches for a value in an array
 *                               using a binary search algorithm
 * @array: - the array to search linearly
 * @value: - the value to search for
 * @start: - the bound to start the search
 * @end: - the bound to end the search
 * Return: - index of value if found else -1
 */
int binary_search_interpolation(int *array, size_t start,
				size_t end, int value)
{
	int mid;

	if (!array || (!*array && *array != 0))
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;
		print_search_info(array, start, end + 1);
		if (array[mid] == value)
			return (array[mid]);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}


/**
 * exponential_search - searches for a value in an array using exponecial
 *                      search algorithm
 *
 * Description: - exponential search gallops to the neareest index position of
 *                a given value if in the array will employ a binary search to
 *                return the given index if the is in the array, the time
 *                complexity of exponential search is O(log i) where 'i' is the
 *                range where the value may be located.
 * @size: - the size of the array
 * @value: - the value to search for
 * @array: - the array to search
 * Return: - returns the index of @value if found else -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t end;

	if (!array || size <= 0)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	end = bound >= size ? size - 1 : bound;
	printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, end);
	return (binary_search_interpolation(array, bound / 2, end, value));
}