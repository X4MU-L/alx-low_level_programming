#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - frees the memory allocated to a 2D array
 *
 * @grid: pointer to array
 * @height: size of the pointer to array of arrays
 *
 * Return: Returns void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
