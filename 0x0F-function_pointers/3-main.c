#include "3-calc.h"

/**
 * main - prints the result of arithemthic operation passed to the\
 * function call - <usage> - calc num1 operator num2
 * @argc: number of argument passed to the function call
 * @argv: array of array of arguments
 * Return: returns 0 on success otherwise exit with an exit code
 */

int main(int __attribute__((__unused__)) argc, char **argv)
{
	int (*ptr_fnc)(int, int);
	char *op;
	int num1, num2;

	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '%' && num2 == 0) ||
	    (*op == '/' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	ptr_fnc = get_op_func(op);

	printf("%d\n", ptr_fnc(num1, num2));
	return (0);
}
