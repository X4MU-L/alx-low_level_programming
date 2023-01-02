#include "main.h"
#include <stddef.h>

/**
 * _strchr - Searches for c in the string s
 *
 * @s: pointer to a char
 * @c: char to search for in s
 *
 * Return: Returns NULL if c is not found otherwise a pointer to\
 * the address of the first occurrence
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (c == '\0')
		return (s + i);
	return (NULL);
}
