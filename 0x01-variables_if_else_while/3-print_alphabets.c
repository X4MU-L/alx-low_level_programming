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
	int i, j;

	i = 97;
	j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (j < 91)
	{
		putchar(j);
		j++;
	}
	putchar(10);

	return (0);
}
