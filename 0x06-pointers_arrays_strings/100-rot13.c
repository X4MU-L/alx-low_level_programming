#include "main.h"

/**
 * rot13 - Encode strings in a rot13 encoding
 *
 * @str: pointer to a char
 *
 * Return: Return encoded string
 */

char *rot13(char *str)
{
	int index = 0, index2;
	char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F',
			     'G', 'H', 'I', 'J', 'K', 'L',
			     'M', 'N', 'O', 'P', 'Q', 'R',
			     'S', 'T', 'U', 'V', 'W', 'X',
			     'Y', 'Z'};
	char rot13key[26] = {'N', 'O', 'P', 'Q', 'R', 'S',
			     'T', 'U', 'V', 'W', 'X', 'Y',
			     'Z', 'A', 'B', 'C', 'D', 'E',
			     'F', 'G', 'H', 'I', 'J', 'K',
			     'L', 'M'};

	while (str[index])
	{
		for (index2 = 0; index2 < 26; index2++)
		{
			if (str[index] == alphabet[index2])
			{
				str[index] = rot13key[index2];
				break;
			}
			else if (str[index] == (alphabet[index2] + 32))
			{
				str[index] = (rot13key[index2] + 32);
				break;
			}
		}

		index++;
	}

	return (str);
}
