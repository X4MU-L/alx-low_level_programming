#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: int - argument count supplied to the program
 * @argv: char - pointer to an array of strings (arguments)
 * Description: Prints the addition of all integer argument\
 * else print Error and return 1 if argument is a char
 *
 * Return: Returns 1 or 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("%d\n", sum);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
