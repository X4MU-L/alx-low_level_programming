#include "search_algos.h"

/**
 * interpolation_search - interpolation search uses a probing to find the
 *                        nearest index to the value being searched.
 * Description: - interpolation has a time complexity of Ο(log (log n)) in a
 *                 sorted array that is EQUALLY DISTRIBUTED.
 *                 This search is an improvement to linear search ONLY but
 *                 in a case where the sorted array are EQUALLY DISTRIBUTED
 *                 otherwise the time complexity becomes same with that of
 *                 linear search O(n).
 * @size: - the size of the array
 * @value: - the value being searched for
 * @array: - the array to search
 * Return: returns the index of the value if found else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0;
	size_t hi = size - 1;
	size_t mid = 0;

	if (!array || size <= 0)
		return (-1);

	while (lo <= hi)
	{
		mid = lo + ((hi - lo) * (value - array[lo])) /
					(array[hi] - array[lo]);
		if (mid >= size)
		{
			printf("Value checked array[%ld] is out of range\n",
			       mid);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			lo = mid + 1;
		else
			hi = mid - 1;
	}

	return (-1);
}
