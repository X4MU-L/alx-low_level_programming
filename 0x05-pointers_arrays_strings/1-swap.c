#include "main.h"

/**
 * swap_int - Entry point
 *
 * @a: pointer to an int
 * @b: pointer to an int
 * Description: Swap the deferencial value of a with b
 *
 * Return: Return (void)
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
