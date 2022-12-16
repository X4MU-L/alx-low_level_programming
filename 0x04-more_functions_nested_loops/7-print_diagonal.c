#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * @n: int - number of lines to print
 * Description: Prints '\' n times diagonally and a newline
 *
 * Return: Return (void)
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar(10);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(32);
		}

		_putchar(92);
		_putchar(10);
	}
}
