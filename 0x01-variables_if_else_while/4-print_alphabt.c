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

	i = 97;

	while (i < 123)
	{
		if (i == 'e' || i == 'q')
		{
			i++;
		}
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
