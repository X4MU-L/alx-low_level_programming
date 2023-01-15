#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int get_len(char *s);
int _isdigit(char c);
char *create_xarray(int size);
char *check_zero(char *s);
void get_product(char *buffer, char *to_mult, int digit, int zero);
void add_nums(char *final_buffer, char *prod_buffer, int buffer_len);


/**
 * main - multiply two number passed in as argument in the command line
 *
 * @argc: argument count
 * @argv: array of array of arguments
 *
 * Return: Returns 0 success or exits with 98 on error
 */

int main(int argc, char **argv)
{
	int size, index, digit, zero = 0;
	char *final_buffer, *prod_buffer;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = check_zero(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = check_zero(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = get_len(argv[1]) + get_len(argv[2]);
	prod_buffer = create_xarray(size + 1);
	final_buffer = create_xarray(size + 1);
	for (index = get_len(argv[2]) - 1; index >= 0; index--)
	{
		digit = _isdigit(*(argv[2] + index));
		get_product(prod_buffer, argv[1], digit, zero++);
		add_nums(final_buffer, prod_buffer, size - 1);
	}

	for (index = 0; final_buffer[index]; index++)
	{
		if (final_buffer[index] != 'x')
			putchar(final_buffer[index]);
	}
	putchar(10);
	free(prod_buffer);
	free(final_buffer);
	return (0);
}

/**
 * get_product - Gets the product of a digit to a sting of char
 *
 * @buffer: array to store product;
 * @to_mult: array of digits to multiply
 * @digit: int with which to multipy to_mult
 * @zero: into to allow for multiplier spacing
 *
 * Return: void
 */


void get_product(char *buffer, char *to_mult, int digit, int zero)
{
	int mult_len = get_len(to_mult) - 1;
	int nums, tens = 0;

	to_mult += mult_len;

	while (*buffer)
	{
		*buffer = 'x';
		buffer++;
	}
	buffer--;

	while (zero--)
	{
		*buffer = '0';
		buffer--;
	}

	for (; mult_len >= 0; mult_len--, buffer--, to_mult--)
	{
		if (*to_mult < '0' || *to_mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		nums = (*to_mult - '0') * digit;
		nums += tens;
		*buffer = (nums % 10) + '0';
		tens = nums / 10;
	}

	if (tens)
		*buffer = (tens % 10) + '0';
}

/**
 * add_nums - Adds the digits of two arrays
 *
 * @final_buffer: array of digits to add;
 * @prod_buffer: array of digits to add;
 * @buffer_len: length of buffer less by 1
 *
 * Return: void
 */


void add_nums(char *final_buffer, char *prod_buffer, int buffer_len)
{
	int sum, tens = 0;

	while (*(final_buffer + 1))
		final_buffer++;

	while (*(prod_buffer + 1))
		prod_buffer++;

	for (; *final_buffer != 'x'; final_buffer--)
	{
		sum = (*final_buffer - '0') + (*prod_buffer - '0');
		sum += tens;
		*final_buffer = (sum % 10) + '0';
		tens = sum / 10;

		prod_buffer--;
		buffer_len--;
	}

	for (; *prod_buffer != 'x' && buffer_len >= 0; buffer_len--)
	{
		sum = (*prod_buffer - '0');
		sum += tens;
		*final_buffer = (sum % 10) + '0';
		tens = sum / 10;

		final_buffer--;
		prod_buffer--;
	}

	if (tens)
		*final_buffer = (tens % 10) + '0';
}

/**
 * _isdigit - Checks if a char is a digit
 *
 * @c: char to check
 *
 * Return: Returns the digit
 */

int _isdigit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * create_xarray - Allocate and create an array of size and intialize with 'x'
 *
 * @size: size of array
 *
 * Return: Returns pointer to allocated array
 */

char *create_xarray(int size)
{
	char *array;
	int i;

	array = malloc(size);

	if (array == NULL)
	{
		exit(98);
	}

	for (i = 0; i < (size - 1); i++)
		array[i] = 'x';
	array[i] = '\0';

	return (array);
}

/**
 * check_zero - checks for leading zeroes in a string
 *
 * @s: pointer to a string of char
 *
 * Return: Returns poniter to string without leading zero
 */

char *check_zero(char *s)
{
	while (*s && *s == '0')
		s++;

	return (s);
}

/**
 * get_len - Get the lenght of a string recursively
 *
 * @s: pointer to a string of char
 *
 * Return: Returns the length of the string
 */

int get_len(char *s)
{
	int i = 0;

	if (!(*s))
		return (0);

	i++;
	return (i + get_len(s + 1));
}
