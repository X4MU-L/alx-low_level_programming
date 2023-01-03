#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: pointer to a char
 * @accept: char to checck for in s
 *
 * Return: Returns the length of bytes from accept in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int sum = 0;
	char *ptr = accept;

	while (*s)
	{
		if (*s == *ptr && *ptr)
		{
			sum++;
			s++;
			ptr = accept;
		}
		else
		{
			ptr++;
		}

		if (*ptr == 0)
			return (sum);
	}
	return (sum);
}
