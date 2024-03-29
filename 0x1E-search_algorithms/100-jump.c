#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search for a value in an array using jump search algorithm
 *               search by increament the sqaure root of the arrar length
 *               and search from start of block when the end block is greater
 *               than value.
 * @size: the length of the array
 * @array: the array to search
 * @value: the value to search for
 * Return: the value index if found else -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t temp_m, m;

	if (!array || size <= 0)
		return (-1);
	temp_m = m = sqrt(size);
	do {
		/* print first value check */
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		/*
		 * check if block is greater
		 * than value or next index > size
		 */
		if (m >= size || array[m] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       i, m);
			/* break out */
			break;
		}
		/* move i to next block */
		i = m;
		/* increment block */
		m += temp_m;
	} while (array[i] <= value);
	/* loop from start of block and check for value*/
	for (; i <= m && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
