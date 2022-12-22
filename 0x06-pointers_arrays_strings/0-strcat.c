#include "main.h"

/**
 * _strcat - Entry point
 *
 * @dest: Pointer to char - string to concate to
 * @src: pointer to char - string to concate
 * Description: Concatenate string src to dest
 *
 * Return: Returns a pointer to char of string concatenated
 */

char *_strcat(char *dest, char *src)
{
	int _strlen(char *);
	int len = _strlen(dest);

	while (*src)
	{
		*(dest + len) = *src;
		len++;
		src++;
	}

	*(dest + len) = '\0';

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
