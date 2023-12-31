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
	int file_descriptor;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	bytes_read = read(file_descriptor, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	close(file_descriptor);
	free(buffer);
	return (bytes_written);
}
