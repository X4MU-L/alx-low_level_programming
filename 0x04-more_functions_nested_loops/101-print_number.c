#include "main.h"
#include <stdio.h>

/**
 * print_number - Entry point
 * @n: int - number to print
 *
 * Description: Prints n using _putchar
 * Return: Return void
 */

void print_number(int n)
{
	unsigned int num = n;

	/*first check if its negative*/
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	/*reculsively print the first few digits*/
	if ((num / 10) > 0)
		print_number(num / 10);

	/*print the last digit*/
	_putchar((num % 10) + 48);
}
