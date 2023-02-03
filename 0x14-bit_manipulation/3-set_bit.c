#include "main.h"

/**
 * set_bit - sets the bit of a given index to 1
 * @n: pointer to integer
 * @index : index of bit to set to 1
 * Return: returns 1 on success or -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *bit = n;
	unsigned long int temp;

	temp = *bit;
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*bit = ((((temp >> index) | 1) << index) | *bit);

	return (1);
}
