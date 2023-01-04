#include "main.h"

/**
 * _puts_recursion - Prints a string of characters recursively and a new line
 *
 * @s: pointer to a string of char
 *
 * Return: Returns void
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
