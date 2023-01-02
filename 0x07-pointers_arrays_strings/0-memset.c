#include "main.h"

/**
 * _memset - Entry point
 *
 * @s: pointer to a char
 * @b: char constant
 * @n: bytes of s to replace with b
 * Description: Fills the first n bytes of s with b
 *
 * Return: Returns a pointer to s memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
