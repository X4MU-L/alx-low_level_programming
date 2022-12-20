#include "main.h"

/**
 * puts2 - Entry point
 *
 * @str: pointer to a char
 * Description: Prints the pointer to char value in reverse
 *
 * Return: Return (void)
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) % 2 != 0)
		{
			i++;
			continue;
		}
		else
		{
			_putchar(*(str + i));
			i++;
		}
	}

	_putchar(10);
}
