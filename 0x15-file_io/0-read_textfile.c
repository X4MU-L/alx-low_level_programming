#include "main.h"

/**
 * read_textfile - reads the contents of a file and prints it to the stdout
 * @filename: the name of the file
 * @letters: the number of letters to print
 * Return: the number of letters written or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wt;
	char *buffer;

	if (filename == NULL || letters <= 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	if (op != -1)
	{
		rd = read(op, buffer, letters);
		if (rd != -1)
		{
			wt = write(STDOUT_FILENO, buffer, rd);
		}
	}
	if (op == -1 || rd == -1 || wt != rd)
	{
		free(buffer);
		close(op);
		return (0);
	}

	free(buffer);
	close(op);
	return (wt);
}
