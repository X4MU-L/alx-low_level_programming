#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 *
 * @a: pointer to an array
 *
 * Return: Returns void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	int n = 8;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(a[i][j]);
		}

		_putchar(10);
	}
}
