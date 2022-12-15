#include "main.h"

/**
 * print_line - Entry point
 *
 * @n: int - number of lines to print
 * Description: Prints '_' n times and a newline
 *
 * Return: Return (void)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar(10);
}
