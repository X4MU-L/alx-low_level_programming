#include "main.h"

/**
 * _strlen_recursion - Get the lenght of a string recursively
 *
 * @s: pointer to a string of char
 *
 * Return: Returns the length of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (!(*s))
		return (0);

	i++;
	return (i + _strlen_recursion(s + 1));
}
