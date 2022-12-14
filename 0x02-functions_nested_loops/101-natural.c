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
	int sum, tmp3, tmp5, i, m = 1024;

	sum = 0;
	tmp3 = 0;
	tmp5 = 0;

	for (i = 0; i < m; i++)
	{
		if (i % 3 == 0)
		{
			tmp3 += i;
		}
		else if (i % 5 == 0)
		{
			tmp5 += i;
		}
	}

	sum = tmp3 + tmp5;
	printf("%d\n", sum);

	return (0);
}
