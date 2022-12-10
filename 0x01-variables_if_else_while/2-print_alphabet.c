#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: prints all lowercase letters
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
