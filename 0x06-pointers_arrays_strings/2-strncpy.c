#include "main.h"

/**
 * _strncpy - Entry point
 *
 * @n: number of most bytes to copy, less than strlen(dest)
 * @dest: Pointer to char - string to concate to
 * @src: pointer to char - string to concate
 * Description: Concatenate string src to dest
 *
 * Return: Returns a pointer to char of string concatenated
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}


	return (dest);
}
