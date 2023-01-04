#include "main.h"

/**
 * _sqrt_recursion - gets the sqaure root of a number
 *
 * @n: int to get sqrt
 *
 * Return: Returns the square root or -1 if n does not have a natural\
 * square root
 */

int _sqrt_recursion(int n)
{
	int _root(int num, int root);
	int temp = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_root(n, temp));

}

/**
 * _root - gets the sqaure root of a number
 *
 * @n: int to get sqrt
 * @root: int to compare
 *
 * Return: Returns the square root or -1 if n does not have a natural\
 * square root
 */

int _root(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root == (n / 2))
		return (-1);
	return (_root(n, root + 1));
}
