#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all digits from 0 to 100, 'Fizz' in place of digit for
 * multiples of 3, 'Buzz' for multiplies of 5 and 'FizzBuzz' for multiplies of
 * both 3 and 5 and a newline
 *
 * Return: Return 0 Always (success)
 */

int main(void)
{
	char buzz[] = "Buzz";
	char fizz[] = "Fizz";
	char fizzbuzz[] = "FizzBuzz";
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", fizzbuzz);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", buzz);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", fizz);
		}
		else
		{
			printf("%i ", i);
		}
	}

	printf("\n");

	return (0);

}
