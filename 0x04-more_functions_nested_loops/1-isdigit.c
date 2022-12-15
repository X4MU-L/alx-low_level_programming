#include "main.h"

/**
 * _isdigit - Entry point
 *
 * @c: char
 * Description: Checks if char is a digit between 0 and
 *                 9 and returns 1 or 0 otherwise
 *
 * Return: Returns 1 if degit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
