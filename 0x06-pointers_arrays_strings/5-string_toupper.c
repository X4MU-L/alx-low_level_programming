#include "main.h"

/**
 * string_toupper - Entry point
 *
 * @a: pointer to a char
 * Description: Change a to upper case
 *
 * Return: Return pointer to a
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
		i++;
	}

	return (a);
}
