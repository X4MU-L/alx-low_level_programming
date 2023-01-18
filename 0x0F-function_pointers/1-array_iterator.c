#include "function_pointers.h"

/**
 * array_iterator - Takes in a function and iterate an array and call function\
 * on each int
 * @action: pointer to a function that takes in an int and returns void
 * @array: pointer to an array of ints
 * @size: size of array
 * Return: Returns void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
