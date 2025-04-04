#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"


/**
 * print_error - print error
 * @message: a pointer to error message
 * @file_name: a pointer to file name
 * @code: error code
 * Return: void
 */

void print_error(const char *message, const char *file_name, int code)
{
	dprintf(2, message, file_name);
	exit(code);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: rray of arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		print_error("Usage: cp file_from file_to\n", NULL, 97);

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
		print_error("Error: Can't read from file %s\n", argv[1], 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_to == -1)
		print_error("Error: Can't write to file %s\n", argv[2], 99);

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written != bytes_read)
			print_error("Error: Can't write to file %s\n", argv[2], 99);
	}

	if (bytes_read == -1)
		print_error("Error: Can't read from file %s\n", argv[1], 98);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH}
