#include "main.h"

/**
 * main - copies a the contents of a file into a new file, create it if
 * it does not exits otherwise trunctate it
 * @argc: number of argument
 * @argv: array of arguments passed to the function call
 * Return: exits with an exit code on failure otherwise return 0
 */

int main(int argc, char **argv)
{
	int n, op, op1, wr, BUFSIZE = 1024;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	op = open(argv[1], O_RDWR);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	printf("op = %d", op);

	while ((n = read(op, buffer, BUFSIZE)) > 0)
	{
		op1 = open(argv[2], O_RDWR | O_APPEND);
		if (op1 != -1)
		{
			wr = write(op1, buffer, n);
			if (wr == -1)
			{
				dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
				close(op1);
				exit(99);
			}
			close(op1);
		}
		else
		{
			op1 = open(argv[2], O_RDWR | O_CREAT | O_APPEND, 0664);
			write(op1, buffer, n);
			close(op1);
		}
	}
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	return (1);
}
