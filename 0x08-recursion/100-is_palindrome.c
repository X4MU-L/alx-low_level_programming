#include "main.h"

/**
 * is_palindrome - checks if a string in a palindrome
 *
 * @s: string to check
 *
 * Return: Returns 1 if palindrome or 0 otherwise
 */

int is_palindrome(char *s)
{
	void _strlen(int *len, char *s);
	int check_palindrome(char *s, char *z);
	int *ptr_len, len = 0;

	ptr_len = &len;

	if (!(*s))
		return (1);
	_strlen(ptr_len, s);
	return (check_palindrome(s + (len - 1), s));
}

/**
 * _strlen - gets the length of a string
 *
 * @s: string to check
 * @len: pointer to an int to update len
 *
 * Return: Returns void
 */

void _strlen(int *len, char *s)
{
	while (*s)
	{
		(*len)++;
		s++;
	}

}

/**
 * check_palindrome - checks if a string in a palindrome
 *
 * @s: string to check - backwards
 * @z: strings to compare - fowards
 *
 * Return: Returns 1 if palindrome or 0 otherwise
 */

int check_palindrome(char *s, char *z)
{

	if (!(*z))
		return (1);
	if (*s == *z)
		return (check_palindrome(s - 1, z + 1));
	return (0);
}
