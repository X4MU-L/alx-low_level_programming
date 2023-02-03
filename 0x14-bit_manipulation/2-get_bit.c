#include "main.h"

/**
 * get_bit - gets the bit at a given index of an integer
 * @n: integer to print
 * @index : index of bit to get
 * Return: returns the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bit = ((n >> index) & 1);

	return (bit);
}
