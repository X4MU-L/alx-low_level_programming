#include "main.h"

/**
 * _abs - Entry point
 *
 * @n: int
 * Description: Returns the value of n or positive n if n is negative
 * Return: Always return positive value of n
 */

int _abs(int n)
{
	int tmp;

	if (n < 0)
	{
		tmp = n * -1;
		return (tmp);
	}
	else
	{
		return (n);
	}
}
