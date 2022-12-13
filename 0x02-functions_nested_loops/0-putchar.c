#include "main.h"


/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space
 * Return: Always 0 (Success)
 */

int main(void)
{
	int pu[9] = {95, 112, 117, 116, 99, 104, 97, 114, 10};
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(pu[i]);
	}

	return (0);
}
