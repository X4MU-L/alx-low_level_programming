#include "main.h"

/**
 * _pow_recursion - Returns the vallue of x power y where y is greater than -1
 *
 * @x: int whose value is to be raised
 * @y: int power of x
 *
 * Return: Returns the power x raised to y or -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
