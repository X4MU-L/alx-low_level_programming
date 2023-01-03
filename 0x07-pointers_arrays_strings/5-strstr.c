#include "main.h"
#include <stddef.h>

/**
 * _strstr - Search for the first occurance of a substring in a string
 *
 * @haystack: string
 * @needle: substring to search for in haystack
 *
 * Return: Returns the first occurance of needle in string haystack
 */

char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr, *needle_ptr;

	while (*haystack)
	{
		haystack_ptr = haystack;
		needle_ptr = needle;

		if (!(*needle_ptr))
			return (haystack);

		while (*haystack_ptr)
		{
			if (*haystack_ptr != *needle_ptr)
				break;
			haystack_ptr++;
			needle_ptr++;

			if (!(*needle_ptr))
				return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
