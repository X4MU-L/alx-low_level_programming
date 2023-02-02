#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - coverts binary to unsigned int
 * @b: a pointer to a string of 0 and 1
 * Return: returns the converted binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	int len, num, l = 0;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	len--;
	for (; len >= 0; len--)
	{
		num = b[len] - '0';
		if (num < 0 || num > 1)
			return (0);
		bin += _pow_recursion(l, num);
		l++;
	}

	return (bin);
}

/**
 * _pow_recursion - Returns the vallue of x power y where y is greater than -1
 * @x: int whose value is to be raised
 * @y: int power of x
 * Return: Returns the power x raised to y or -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	int base = 2;

	if (y == 0)
		return (0);
	if (x == 0)
		return (1);
	if (x == 1)
		return (base);
	while (x > 1)
	{
		base *= 2;
		x--;
	}
	return (base);
}

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 * Return: integer length of string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
