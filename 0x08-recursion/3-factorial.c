#include "main.h"

/**
 * factorial - Get the factorial of a number a given number
 *
 * @n: int to get it's factorial
 *
 * Return: Returns the factorial of n or -1 if less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
