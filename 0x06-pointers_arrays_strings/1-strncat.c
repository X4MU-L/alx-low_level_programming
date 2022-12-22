#include "main.h"

/**
 * _strncat - Entry point
 *
 * @n: n numbers of byte of src to copy
 * @dest: Pointer to char - string to concate to
 * @src: pointer to char - string to concate
 * Description: Concatenate string src to dest
 *
 * Return: Returns a pointer to char of string concatenated
 */

char *_strncat(char *dest, char *src, int n)
{
	int _strlen(char *);
	int i, len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + len + i) = *(src + i);

	*(dest + len + i) = '\0';

	return (dest);
}




/**
 * _strlen - Entry point
 *
 * @s: pointer to a char
 * Description: Gets the length of the string passed in as s
 *
 * Return: Return the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);

}
