#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: Takes no argument and prints all lowercase letters
 * Return: Does not have a return
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}

	_putchar(10);
}
