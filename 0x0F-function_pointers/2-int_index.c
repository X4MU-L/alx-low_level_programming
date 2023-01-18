#include "function_pointers.h"

/**
 * int_index - Takes in a function and iterate an array and call function\
 * on each int returns array for which cmp returns a num greater than zero
 * @cmp: pointer to a function that takes in an int and campares
 * @array: pointer to an array of ints
 * @size: size of array
 * Return: Returns void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
			return (i);
	}

	return (-1);
}
