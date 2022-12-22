#include "main.h"

/**
 * reverse_array - Entry point
 *
 * @a: pointer to array
 * @n: number of elements in the array
 * Description: Reverse the items in an array
 *
 * Return: Return (void)
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + (n - i - 1));
		*(a + (n - i - 1)) = tmp;
	}

}
