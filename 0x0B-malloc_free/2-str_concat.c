#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * str_concat - returns a pointer to a newly allocated space in memory, which\
 * contains a the concat of two string parameter
 *
 * @s1: pointer to a string of char
 * @s2: pointer to a string of char
 *
 * Return: Returns a pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int _strlen_recursion(char *s);

	int len, len2, i;
	char *ptr_chr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = _strlen_recursion(s1);
	len2 = _strlen_recursion(s2);

	ptr_chr = (char *)malloc(sizeof(char) * (len + len2) + 1);

	if (ptr_chr == NULL)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		*(ptr_chr + i) = s1[i];
		i++;
	}

	while (*s2)
	{
		*(ptr_chr + i) = *s2;
		s2++;
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
