#include "variadic_functions.h"

/**
 * sum_them_all - Sums up a given number of arguments (ints) and\
 * and prints the sum
 * @n: number of arguments
 * Return: Returns sum success or 0 on failure
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
