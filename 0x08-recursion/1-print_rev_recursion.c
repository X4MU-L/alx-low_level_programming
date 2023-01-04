#include "main.h"

/**
 * _print_rev_recursion - Prints a string of characters recursively in reverse
 *
 * @s: pointer to a string of char
 *
 * Return: Returns void
 */

void _print_rev_recursion(char *s)
{
	if (*(s + 1))
		_print_rev_recursion(s + 1);
	_putchar(*s);
}
