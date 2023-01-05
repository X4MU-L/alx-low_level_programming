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
	int _strlen(char *s);
	int check_palindrome(char *s, char *z);
	int len = 0;

	if (!(*s))
		return (1);
	len = _strlen(s);
	return (check_palindrome(s + (len - 1), s));
}

/**
 * _strlen - gets the length of a string
 *
 * @s: string to check
 *
 * Return: Returns length of string
 */

int _strlen(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen(s + len);
	}

	return (len);

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
