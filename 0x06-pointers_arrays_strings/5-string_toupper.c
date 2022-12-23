#include "main.h"
#include <stdio.h>
/**
 * _strlen - Entry point
 *
 * @s: pointer to a char
 * Description: Gets the length of the string passed in as s
 *
 * Return: Return the length of the string
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
