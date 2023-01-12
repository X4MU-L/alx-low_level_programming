#include <stdlib.h>

/**
 * array_range - creates array an initize from min to max both included
 *
 * @min: minimum number in array
 * @max: maximum number in array
 *
 * Return: Return pointer to array
 */

int *array_range(int min, int max)
{
	int size, i;
	int *ptr_int;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;

	ptr_int = malloc(sizeof(*ptr_int) * size);

	if (ptr_int == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
		ptr_int[i] = min++;

	return (ptr_int);
}
