#include <stdio.h>

/**
 * main - Prints the name of file it was compiled from
 *
 * Return: Returns 0 (success) always
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
