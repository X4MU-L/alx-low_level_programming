#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tmp, i, m = 1024;

	for (i = 0; i < m; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			tmp += i;
		}
	}

	printf("%d\n", tmp);

	return (0);
}
