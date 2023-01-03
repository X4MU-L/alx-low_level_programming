#include <stdio.h>

/**
 * print_diagsums - Print the sum of diagonal sum of multidimentional arrays
 *
 * @size: size of array
 * @a: array
 *
 * Return: Returns void
 */

void print_diagsums(int *a, int size)
{
	int i, j, right_sum, left_sum;

	left_sum = right_sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == 0)
				right_sum += *(a + i * size + i);
			if (j == size - 1)
				left_sum += *(a + i * size + (size - (i + 1)));
		}
	}
	printf("%d, %d\n", right_sum, left_sum);
}
