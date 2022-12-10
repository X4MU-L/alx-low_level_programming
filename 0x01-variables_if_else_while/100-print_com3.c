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
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 8 && j == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar(10);

	return (0);
}
