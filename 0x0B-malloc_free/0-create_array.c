#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates memory allocation for char of size
 *
 * @size: size of memory to allocate
 * @c: char
 *
 * Return: Return pointer to char
 */

char *create_array(unsigned int size, char c)
{
	char *ptr_chr;
	int i = 0;

	if (size <= 0)
		return (NULL);
	ptr_chr = (char *)malloc(sizeof(c) * size);

	while (i < (int)size)
	{
		*(ptr_chr + i) = c;
		i++;
	}

	return (ptr_chr);
}
