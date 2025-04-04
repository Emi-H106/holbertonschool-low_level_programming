#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include"main.h"

/**
 * _strlen - calculates the length of the string
 * @s: the string
 * Return: the length of a string
 */


size_t _strlen(const char *s)
{
	size_t length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: a pointer to filename
 * @text_content: a pointer to text content
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, _strlen(text_content));

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
