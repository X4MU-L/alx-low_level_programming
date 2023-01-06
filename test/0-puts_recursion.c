#include "main.h"

void _puts_recursion(char *s)
{
	/*if s is still valid*/
	if (*s == '\0')
	{
		/* make another call with a new address*/
		_putchar(10);
		return;
	}
	/*if no longer valid return*/
	_putchar(*s);
	_puts_recursion(s + 1);

}
