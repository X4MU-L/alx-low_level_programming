#include "main.h"

/**
 * append_text_to_file - appends a text to an existing file
 * @filename: the name of the file
 * @text_content: a string of char
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		while (text_content[len])
			len++;
	if (text_content)
	{
		op = open(filename, O_APPEND | O_RDWR);
		if (op != -1)
			wr = write(op, text_content, len);
		if (op == -1 || wr == -1)
			return (-1);

		close(op);
	}

	return (1);
}
