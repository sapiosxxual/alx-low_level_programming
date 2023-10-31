#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters it should read and print
 * * Return: the actual number of letters it could read and print
 * If the file can't be opened or read, it returns 0.
 * If filename is NULL, it returns 0.if write fails or does not
 * write the expected amount of bytes, it returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file_descriptor;
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (bytes_written);
}

