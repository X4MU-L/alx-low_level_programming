#include <stdlib.h>

/**
 * malloc_checked - allocates a memory of size b on the heap
 *
 * @b: size of memory to allocate
 *
 * Return: Returns a void pointer or exit with 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
