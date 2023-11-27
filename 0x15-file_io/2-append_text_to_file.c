#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: content to be appended
 * Return: 1 on success, -1 otherwise
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int op, bytes_written, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];i++)
			;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	bytes_written = write(op, text_content, i);

	if (op == -1 || bytes_written == -1)
		return (-1);

	close(op);

	return (1);
