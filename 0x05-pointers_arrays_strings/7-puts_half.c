#include "main.h"

/**
 * _strlen - Entry point
 *
 * @s: pointer to a char
 * Description: Gets the length of the string passed in as s
 *
 * Return: Return the length of the string
 */

void puts_half(char *str)
{
	int _strlen(char *s);
	int i, len = _strlen(str);

	if (len % 2 != 0)
	{
		_putchar(*(str + ((len - 1) / 2)));
	}
	else
	{
		for (i = len / 2; i < len; i++)
			_putchar(*(str + i));
	}

	_putchar(10);
}





















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
