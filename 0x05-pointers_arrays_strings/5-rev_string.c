#include "main.h"

/**
 * rev_string - Entry point
 *
 * @s: pointer to a char
 * Description: Reverse the strings to a pointer
 *
 * Return: Return (void)
 */

void rev_string(char *s)
{
	int i, j, tmp;

	i = 0;
	/*get the length of the strings*/
	while (*(s + i) != '\0')
	{
		i++;
	}


	for (j = 0; j < i / 2; j++)
	{
		tmp = *(s + j);
		*(s + j) = *(s + i - j - 1);
		*(s + i - j - 1) = tmp;
	}

}
