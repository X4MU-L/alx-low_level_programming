#include "main.h"

/**
 * clear_bit - sets the bit of a given index to 0
 * @n: pointer to integer
 * @index : index of bit to set to 0
 * Return: returns 1 on success or -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	    *n &= ~(1 << index);

	return (1);
}
