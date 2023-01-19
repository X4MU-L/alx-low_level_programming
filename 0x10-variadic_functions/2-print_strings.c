#include "variadic_functions.h"

/**
 * print_strings - Prints strings of arguments separated by a seprator
 * @n: number of arguments
 * @separator: pointer to char - separator
 * Return: Returns void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *ptr_str;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ptr_str = va_arg(ap, char *);

		if (ptr_str == NULL)
			printf("(nil)");
		else
			printf("%s", ptr_str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
