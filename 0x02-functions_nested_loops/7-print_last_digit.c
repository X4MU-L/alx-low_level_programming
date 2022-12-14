#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @n: int
 * Description: Prints the last digit of n positive
 * Return: last digit of n positive
 */

int print_last_digit(int n)
{
	int tmp;

	tmp = n % 10;

	if (tmp < 0)
	{
		tmp *= -1;
		_putchar(tmp + '0');
		return (tmp);
	}

	_putchar(tmp + '0');
	return (tmp);
}
