#include <stdlib.h>
#include <stddef.h>

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
	int word_count(char *str);
	void copy_str2uneven_array(char **arr_aray, char *str, int height);

	char **ptr_chr;
	int i, j, height = 0, width;

	if (str == NULL || *str == '\0')
		return (NULL);
	height = word_count(str);
	if (height == 0)
		return (NULL);
	ptr_chr = malloc(sizeof(char *) * height + 1);
	if (ptr_chr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == 32)
			continue;
		width = 0;
		for (; str[i] != 32; i++)
			width++;
		for (j = 0; j < height; j++)
		{
			ptr_chr[j] = malloc(sizeof(char) * width + 1);
			if (ptr_chr[j] == NULL)
			{
				for (; j >= 0; j--)
					free(ptr_chr[j]);
				free(ptr_chr);
				return (NULL);
			}
		}
	}
	ptr_chr[j] = NULL;
	copy_str2uneven_array(ptr_chr, str, height);

	return (ptr_chr);
}

/**
 * word_count - Get the count of how many words are in a string seperated\
 * by spaces
 *
 * @str: pointer to a string
 *
 * Return: Returns the word count
 */

int word_count(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == 32)
			continue;
		for (; str[i] != 32; i++)
			continue;
		count++;
	}

	return (count);
}

/**
 * copy_str2uneven_array - copies from str delimited by spaces to array\
 * of arrays
 *
 * @str: pointer to a string to copy from
 * @arr_aray: array of arrays
 * @height: length of array
 *
 * Return: Returns void
 */

void copy_str2uneven_array(char **arr_aray, char *str, int height)
{
	int width, i, j = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == 32)
			continue;

		width = 0;

		for (; str[i] != 32 && j < height; i++)
		{
			arr_aray[j][width++] = str[i];
		}

		arr_aray[j][width++] = '\0';
		j++;
	}
}
