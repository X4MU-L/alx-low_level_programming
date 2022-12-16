#include "main.h"

/**
 * print_number - Entry point
 * @n: int - number to print
 *
 * Description: Prints n using _putchar
 * Return: Return void
 */

void print_number(int n)
{
	int tmp;

	if (n < 0)
	{
		tmp = n * -1;
	}
	else
	{
		tmp = n;
	}

	if (tmp >= 0 && tmp < 10)
	{
		if (n < 0)
			_putchar('-');
		_putchar(tmp % 10 + '0');
	}
	else if (tmp >= 10 && tmp < 100)
	{
		if (n < 0)
			_putchar('-');
		_putchar((tmp / 10) + '0');
		_putchar(tmp % 10 + '0');
	}
	else if (tmp >= 100 && tmp < 1000)
	{
		if (n < 0)
			_putchar('-');
		_putchar((tmp / 100) + '0');
		_putchar(((tmp / 10) % 10) + '0');
		_putchar(tmp % 10 + '0');
	}
	else if (tmp >= 1000 && tmp < 10000)
	{
		if (n < 0)
			_putchar('-');
		_putchar((tmp / 1000) + '0');
		_putchar(((tmp / 100) % 10) + '0');
		_putchar(((tmp / 10) % 10) + '0');
		_putchar(tmp % 10 + '0');
	}
	else if (tmp >= 10000 && tmp < 100000)
	{
		if (n < 0)
			_putchar('-');
		_putchar((tmp / 10000) + '0');
		_putchar(((tmp / 1000) % 10) + '0');
		_putchar(((tmp / 100) % 10) + '0');
		_putchar(((tmp / 10) % 10) + '0');
		_putchar(tmp % 10 + '0');
	}
}
