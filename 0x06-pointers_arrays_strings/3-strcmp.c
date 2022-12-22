#include "main.h"

/**
 * _strcmp - Entry point
 *
 * @s1: Pointer to char - string to compare
 * @s2: pointer to char - string to compare
 * Description: Compare 2 strings
 *
 * Return: Returns an int greater than, equal to or greater than zero
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2)
	{

		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}

	return (*s1 - *s2);
}
