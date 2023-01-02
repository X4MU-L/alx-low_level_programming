#include "main.h"

/**
 * _memcpy - Entry point
 *
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n: bytes of src to copy to dest
 * Description: Copies n memory of src to dest memory
 *
 * Return: Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
