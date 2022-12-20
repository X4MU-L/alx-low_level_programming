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

		if (i == 0)
		{
			_putchar(*(str + i));
			i++;
		}
		else if (i % 2 == 0)
		{
			_putchar(*(str + i));
			i++;
		}
		else
		{
			i++;
			continue;
		}
	}

	_putchar(10);
}
