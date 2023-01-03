#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Checks for the first occurance of the bytes in s from accept
 *
 * @s: pointer to a char
 * @accept: string to search for
 *
 * Return: Returns NULL if accept is not found otherwise a pointer to\
 * the address of the first occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	while (*s != 0)
	{
		ptr = accept;

		while (*ptr)
		{
			if (*s != *ptr)
				ptr++;
			else
				return (s);
		}
		s++;
	}
	return (NULL);
}
