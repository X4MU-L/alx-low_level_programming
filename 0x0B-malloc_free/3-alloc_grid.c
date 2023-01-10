#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which\
 * contains a copy of the string given as a parameter
 *
 * @str: pointer to a string of char
 *
 * Return: Returns a pointer to the copied string
 */

int **alloc_grid(int width, int height)
{
	int **array, i, j;
	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (array[i] == NULL)
			free(array[i]);
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;

	return (array);
}
