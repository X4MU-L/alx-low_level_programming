#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: checks if a ramdom number generated in negetive or positive
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;

	if (last < 6 && last > 0)
	{
		char strn[] = "Last digit of %d is %d and is less than 6 and not 0\n";

		printf(strn, n, last);
	}
	else if (last > 5)
	{
		char strn[] = "Last digit of %d is %d and is greater than 5\n";

		printf(strn, n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	return (0);
}
