#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: char
 * Description: Checks if char is alphabet and returns 1 or 0 otherwise
 *
 * Return: Returns 1 if alphabet or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
