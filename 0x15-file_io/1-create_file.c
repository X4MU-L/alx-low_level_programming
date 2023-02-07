#include "main.h"

/**
 * create_file - creates a file and if the file already exists truncate it
 * @filename: the name of the file
 * @text_content: a string of char
 * Return: the number of letters written or 0 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	while (text_content[len])
	       len++;

	if (op != -1)
		wr = write(op, text_content, len);
	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
