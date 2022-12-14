#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: int
 * Description: Prints + if n is greater than zero, 0 if zero,
 *                                    and - if less than zer0
 * Return: 1 if n greater than 0, 0 if n is zero and -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

}
