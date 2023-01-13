#include <stdlib.h>

/**
 * _realloc - Allocates, Reallocates or Deallocates memory depending on the\
 * argument passed
 *
 * @ptr: void pointer to a memory allocated with malloc
 * @old_size: size of ptr memory
 * @new_size: new size or memory to allocate
 *
 * Return: Returns a void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_chr, *filler;
	void *mem;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		return (mem);
	}

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	ptr_chr = ptr;
	mem = malloc(sizeof(*ptr_chr) * new_size);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (i = 0; i < old_size && i < new_size; i++)
		filler[i] = *ptr_chr++;

	free(ptr);
	return (mem);
}
