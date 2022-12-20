#include "main.h"

/**
 * puts_half - Entry pointx
 *
 * @str: pointer to a char
 * Description: Prints half of an even string
 *
 * Return: Return (void)
 */

void puts_half(char *str)
{
	int _strlen(char *);
	int i, len = _strlen(str);

	if (len % 2 != 0)
	{
		for (i = 0; i < (len - 1) / 2; i++)
			_putchar(*(str + i));
	}
	else
	{
		for (i = len / 2; i < len; i++)
			_putchar(*(str + i));
	}

	_putchar(10);
}

/**
 * _strlen - Entry point
 *
 * @s: pointer to a char
 *
 * Return: Return the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);

}
