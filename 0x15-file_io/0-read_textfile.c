#include "main.h"

/**
 * read_textfile - read a file.
 * @filename: the file to read.
 * @letters: the number of chars to read
 * Description: read a file
 * section header: the header of this function is holberton.h
 * Return: this return the number of chars.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor = open(filename, O_RDONLY);
	char *buffer = (char *)malloc(sizeof(char) * letters);
	ssize_t bytes_read = read(file_descriptor, buffer, letters);
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (filename == NULL)
		return (0);
	if (file_descriptor == -1)
		return (0);
	if (buffer == NULL)
	{
		close(fil0e_descriptor);
		return (0);
	}
	if (bytes_read == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}
	close(file_descriptor);
	free(buffer);
	return (bytes_written);
}
