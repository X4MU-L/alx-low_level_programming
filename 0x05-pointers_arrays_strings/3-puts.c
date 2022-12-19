#include "main.h"

/**
 * _puts - Entry point
 *
 * @str: pointer to a string
 * Description: Prints str to the stdout
 *
 * Return: Return (void)
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}

	_putchar(10);

}
