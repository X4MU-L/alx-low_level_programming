#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((k % 10) + '0');
				if (i == 7 && j == 8)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar(10);

	return (0);
}
