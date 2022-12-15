#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Description: Prints all digits from 0 to 9 and a newline except 2 and 4
 *
 * Return: Return (void)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i % 10 + '0');
	}

	_putchar(10);
}
