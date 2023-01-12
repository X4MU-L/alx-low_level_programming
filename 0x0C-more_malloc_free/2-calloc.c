#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - creates memory allocation and initialize to zero
 *
 * @size: size of byte to allocate
 * @nmemb: size of array
 *
 * Return: Return a void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *void_ptr;
	char *ptr_chr;
	unsigned int i = 0;

	if (size <= 0 || nmemb <= 0)
		return (NULL);

	void_ptr = malloc(size * nmemb);

	if (void_ptr == NULL)
		return (NULL);

	ptr_chr = void_ptr;
	while (i < (size * nmemb))
	{
		ptr_chr[i] = '\0';
		i++;
	}

	return (void_ptr);
}
