#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * @n: Params int
 * Description: Prints all natural numbers of n to 98
 * Return: no return
 */

void print_to_98(int n)
{
	int m = 98, i;

	if (n > m)
	{
		for (i = n; i >= m; i--)
		{
			if (i == m)
			{
				printf("%d\n", i);
				continue;
			}
			printf("%d, ", i);
		}
	}
	else if (n == m)
	{
		printf("%d\n", n);
	}
	else
	{
		for (i = n; i <= m; i++)
		{
			if (i == m)
			{
				printf("%d\n", i);
				continue;
			}
			printf("%d, ", i);
		}
	}
}
