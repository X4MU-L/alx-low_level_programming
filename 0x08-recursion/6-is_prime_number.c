#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: int to check
 *
 * Return: Returns 1 if prime number or 0 otherwise
 */

int is_prime_number(int n)
{
	int get_prime(int num, int mod);
	int temp = 0;

	if (n <= 1)
		return (0);
	return (get_prime(n, temp));

}

/**
 * get_prime - checks if a number is a prime number - helper function
 *
 * @n: int to check
 * @mod: int to for mod
 *
 * Return: Returns 1 if prime or 0 otherwise
 */

int get_prime(int n, int mod)
{
	if (mod * mod == n)
		return (0);
	if (mod == (n / 2))
		return (1);
	return (get_prime(n, mod + 1));
}
