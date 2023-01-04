#include "main.h"

/**
 * _puts_recursion - Prints a string of characters recursively and a new line
 *
 * @s: pointer to a string of char
 *
 * Return: Returns void
 */

void _puts_recursion(char *s)
{
	if (!(*s))
	{
		_putchar(10);
		return;
	}
	_putchar(*s);

	_puts_recursion(s + 1);
}
