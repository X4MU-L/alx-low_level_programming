#include "main.h"

/**
 * _strlen - Entry point
 *
 * @s: pointer to a char
 * Description: Gets the length of the string passed in as s
 *
 * Return: Return the length of the string
 */

char *leet(char *s)
{
	int i = 0, j;
	char leet[8] = {'O','L','?','E','A','?','?','T'};

	while (s[i])
	{
		for (j = 0; j < 8; j++)
		{
			if (s[i] == leet[j] ||
			    (s[i] - 32) == leet[j])
				s[i] = j + '0';
		}

		i++;
	}

	return (s);
}
