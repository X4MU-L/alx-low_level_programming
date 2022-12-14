#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = rand() - RAND_MAX / 2;
        positive_or_negative(i);

        return (0);
}
