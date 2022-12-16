#include "main.h"

/**
 * print_square - Entry point
 *
 * @size: int - square size to print
 * Description: Prints '\' n times diagonally and a newline
 *
 * Return: Return (void)
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar(10);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}

		_putchar(10);
	}
}
