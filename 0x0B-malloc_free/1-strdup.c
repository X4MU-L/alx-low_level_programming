#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which\
 * contains a copy of the string given as a parameter
 *
 * @str: pointer to a string of char
 *
 * Return: Returns a pointer to the copied string
 */

char *_strdup(char *str)
{
	int _strlen_recursion(char *s);

	int len, i;
	char *ptr_chr;

	if (str == NULL)
		return (NULL);

	len = _strlen_recursion(str);

	ptr_chr = (char *)malloc(sizeof(char) * len + 1);

	if (ptr_chr == NULL)
		return (NULL);

	i = 0;
	while (str[i])
	{
		*(ptr_chr + i) = str[i];
		i++;
	}

	*(ptr_chr + i) = '\0';
	return (ptr_chr);
}

/**
 * _strlen_recursion - Get the lenght of a string recursively
 *
 * @s: pointer to a string of char
 *
 * Return: Returns the length of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (!(*s))
		return (0);

	i++;
	return (i + _strlen_recursion(s + 1));
}
