#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: prints all lowercase and uppercase letters
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		if (i == 9)
		{
			i++;
			continue;
		}
		
		putchar(i % 10 + '0');
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar(10);

	return (0);
}
