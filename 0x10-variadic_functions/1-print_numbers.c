#include "variadic_functions.h"

/**
 * print_numbers - Prints a number of arguments separated by a seprator
 * @n: number of arguments
 * @separator: pointer to char - separator
 * Return: Returns void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1) && separator != NULL)
			printf("%d%c ", va_arg(ap, int), *separator);
		else if (i != (n - 1) && separator == NULL)
			printf("%d ", va_arg(ap, int));
		else
			printf("%d\n", va_arg(ap, int));
	}

	va_end(ap);
}
