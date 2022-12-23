#include "main.h"

/**
 * cap_string - Entry point
 *
 * @str: pointer to a char
 * Description: Capitalize all words.
 *
 * Return: Return capitalized string
 */

char *cap_string(char *str)
{
	int i, sp, cap;

	while (str[i])
	{
		sp = str[i] == '\n' || str[i] == '\t' || str[i] == '.' || str[i] == ' ';
		cap = str[i + 1] >= 97 && str[i + 1] <= 122;

		if (sp && cap)
			str[i + 1] -= 32;

		i++;
	}

	return (str);
}
