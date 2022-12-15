#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: Prints all digits from 0  ro 9 and a newline
 *
 * Return: Return (void)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i % 10 + '0');
	}

	_putchar(10);
}
