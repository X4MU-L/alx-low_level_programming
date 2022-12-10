#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num1;

	for (num1 = 0; num1 <= 30; num1++)
	{
		putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(',');
			putchar(' ');
	}

	putchar('\n');
	return (0);
}
