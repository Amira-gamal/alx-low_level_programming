#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_buffer(char *file);
void file(int fd);

/**
 * _buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */
char *_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * _close - Closes file.
 * @fd: The file descriptor.
 */
void _close(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int f, t, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = _buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	r = read(f, buffer, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(t, buffer, r);
		if (t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(f, buffer, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	_close(f);
	_close(t);

	return (0);
}
