#include "main.h"

/**
 * print_rev - Entry point
 *
 * @s: pointer to a char
 * Description: Prints the pointer to char value in reverse
 *
 * Return: Return (void)
 */

void print_rev(char *s)
{
	int i;
	char *p;

	i = 0;
	/*get the length of the strings*/
	while (*(s + i) != '\0')
	{
		i++;
	}

	/*print the strings in reverse*/
	for (p = &(*(s + (i - 1))); p >= &(*(s + 0)); p--)
	{
		_putchar(*p);
	}

	_putchar(10);

}
