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
	int i, sp, ch, cap;

	while (str[i])
	{
		sp = str[i] == '\n' || str[i] == '\t' || str[i] == ' ' || str[i] == 123 || str[i] == 125;
		ch = str[i] == 34 || str[i] == 33 || str[i] == 63 || str[i] == 59 || (str[i] >= 40 && str[i] <= 46);
		cap = str[i + 1] >= 97 && str[i + 1] <= 122;

		if ((ch || sp) && cap)
			str[i + 1] -= 32;

		i++;
	}

	return (str);
}
