#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - returns a pointer to a newly allocated space in memory, for\
 * 2D array and initailize to zero
 *
 * @width: size of the array of int
 * @height: size of the array of arrays
 *
 * Return: Returns a pointer to the array or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			for (; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;

	return (array);
}
