#include "main.h"

/**
 * print_triangle - Entry point
 *
 * @size: int - size of triangle to print
 * Description: Prints 'size' triangle and a newline
 *
 * Return: Return (void)
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar(10);

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			_putchar(32);
		}
		for (k = 0; k <= i; k++)
		{
			_putchar(35);
		}

		_putchar(10);
	}
}
