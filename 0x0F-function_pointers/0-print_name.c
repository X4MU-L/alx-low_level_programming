#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Takes in a function pointer and passes name to it's call
 * @f: function pointer to a function that takes in string and returns void
 * @name: pointer to a char - string
 * Return: Returns void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
