#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all base 16 number in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 0;

	while (i < 16)
	{
		if (i > 9)
		{
			j = 97;
			while (j < 103)
			{
				putchar(j);
				j++;
				i++;
			}
		}
		else if (i < 10)
		{
			putchar(i % 10 + '0');
			i++;
		}
	}
	putchar(10);

	return (0);
}
