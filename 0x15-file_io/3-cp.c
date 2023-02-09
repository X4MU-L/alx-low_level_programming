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
	int from, to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, BUFSIZE);
	if (from == -1 || rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		if (buffer)
			free(buffer);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (to == -1 && errno == EEXIST)
		to = open(argv[2], O_WRONLY | O_TRUNC | O_APPEND);

	while ((wr = write(to, buffer, rd)) > 0)
		rd = read(from, buffer, BUFSIZE);
	if (to == -1 || wr == -1)
	{
		free(buffer);
		close_FD(from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	free(buffer);
	close_FD(from);
	close_FD(to);
	return (0);
}

/**
 * create_buffer - creates a buffer of size 1024 bits and return address
 * @filename: a string of a filename
 * Return: returns the first index of the address created
 */

char *create_buffer(char *filename)
{
	char *buffer = malloc(sizeof(char) * BUFSIZE);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}

/**
 * close_FD - closes a file discriptor or print to the stderr on failure
 * @fd: file descriptor
 * Return: void
 */

void close_FD(int fd)
{
	int n;

	n = close(fd);

	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
