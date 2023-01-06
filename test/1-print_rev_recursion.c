#include "main.h"

void _print_rev_recursion(char *s)
{
	/*if s is still valid*/
	if (*(s + 1))
	{
		/* make another call with a new address*/
		_print_rev_recursion(s + 1);
	}
	/*if no longer valid return*/
	_putchar(*s);
	return;
}
