#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: int - argument count supplied to the program
 * @argv: char - pointer to an array of strings (arguments)
 * Description: Prints the number of arguments supplied upon function call
 *
 * Return: Returns success (0) always
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
