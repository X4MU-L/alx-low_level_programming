#include <stdio.h>

/**
 * print_array - Entry point
 *
 * @a: pointer to a char
 * @n: int - number of array element to print
 * Description: Prints the n element of array a
 *
 * Return: Return (void)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i + 1 == n)
		{
			printf("%d", *(a + i));
		}
		else
		{
			printf("%d, ", *(a + i));
		}
	}

	printf("\n");
}
