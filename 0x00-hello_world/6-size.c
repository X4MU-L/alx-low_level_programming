#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the sizes of types to the stdout using printf
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	long int longIntType;
	long long int longerIntType;
	char charType;

	printf("Size of a char: %zu bytes(s)\n", sizeof(charType));
	printf("Size of an int: %zu bytes(s)\n", sizeof(intType));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longerIntType));
	printf("Size of a float: %zu bytes(s)\n", sizeof(floatType));

	return (0);
}
