#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints to the stderr using fprinf
 * Return: Always 1 (Failure)
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", quote);
	return (1);
}
