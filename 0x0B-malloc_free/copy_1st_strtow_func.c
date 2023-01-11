#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * strtow - returns a pointer to a newly allocated space in memory, which\
 * contains a multidimentional array of str
 *
 * @str: pointer to a string of char
 *
 * Return: Returns a pointer to the array of arrays
 */

char **strtow(char *str)
{
	char **ptr_chr;
	int i, j, height = 0, width;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] == 32)
			continue;
		for (; str[i] != 32; i++)
			continue;
		height++;
	}
	printf("height = %d\n", height);

	ptr_chr = malloc(sizeof(char *) * height);

	if (ptr_chr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
        {
                if (str[i] == 32)
                        continue;

		width = 0;
                for (; str[i] != 32; i++)
                        width++;
                width++;

		printf("width = %d; height = %d\n", width, height);
		for (j = 0; j < height; j++)
		{
			ptr_chr[j] = malloc(sizeof(char) * width);

			if (ptr_chr[j] == NULL)
			{
				for (; j >= 0;j--)
					free(ptr_chr[i]);
				free(ptr_chr);
				return (NULL);
			}
		}
        }
	ptr_chr[j] = NULL;

	j = 0;
	for (i = 0; str[i]; i++)
        {
                if (str[i] == 32)
                        continue;

                width = 0;
                for (; str[i] != 32 && j < height; i++)
		{
                        ptr_chr[j][width++] = str[i];
		}
                ptr_chr[j][width++] = '\0';
		j++;
	}

	return (ptr_chr);
}
