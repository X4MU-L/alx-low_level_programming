#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct print_f - struct for for a print formater
 * @format: format to print func with
 * @func: pointer to a function that take a va_list argument and returns void
 */

typedef struct print_f
{
	char *format;
	void (*func)(va_list arg);
} printer_f;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_H */
