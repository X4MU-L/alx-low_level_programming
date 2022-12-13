#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: Checks if char is lowercase and returns 1 or 0 otherwise
 *
 * Return: Returns 1 if lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
