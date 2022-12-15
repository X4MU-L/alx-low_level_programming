#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c: char
 * Description: Checks if char is lowercase and returns 1 or 0 otherwise
 *
 * Return: Returns 1 if lowercase or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
