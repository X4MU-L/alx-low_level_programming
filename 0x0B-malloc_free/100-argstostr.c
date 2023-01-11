#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - concatenate args to a function call and add a newline to each
 *
 * @ac: argument count
 * @av: arguments passed
 *
 * Return: Returns a pointer to copied strings to alloated memory
 */

char *argstostr(int ac, char **av)
{
	char *ptr_char;
	int i, j, k, len_add = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len_add++;
	}

	ptr_char = malloc(sizeof(char) * len_add + 1);

	if (ptr_char == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0;av[i][j]; j++)
			ptr_char[k++] = av[i][j];
		ptr_char[k++] = '\n';
	}
	ptr_char[len_add] = '\0';

	return (ptr_char);
}
