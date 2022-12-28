#include "main.h"

/**
 * leet - Entry point
 *
 * @s: pointer to a char
 * Description: Encodes letters in LEET - 1337
 *
 * Return: Returns encoded chars
 */

char *leet(char *s)
{
	int i = 0, j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

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
