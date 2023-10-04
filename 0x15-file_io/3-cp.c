#include "main.h"
char *create_buff(char *filename);
void close_file(int file_d);
/**
 * create_buff - alloc 1024 bytes for a buffer
 * @filename: the file buffer is storing characters for
 * Return: pointer to the new alloc buffer
 */
char *create_buff(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - closes file descriptors
 * @file_d: the file descriptor to be closed
 */
void close_file(int file_d)
{
	int cl;

	cl = close(file_d);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d);
		exit(100);
	}
}
/**
 * main - copies contents of ine file to another
 * @argc: no of arguments passed to the command line
 * @argv: array of pointers to the arguments
 * Return: On Success (0);
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, r, w;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_file(file_from);
		exit(99);
	}
	while ((r = read(file_from, buffer, 1024)) > 0)
	{
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
					argv[1]);
			close_file(file_from);
			close_file(file_to);
			exit(98);
		}
		w = write(file_to, buffer, r);
		if (w == -1 || w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_file(file_from);
			close_file(file_to);
			exit(99);
		}
		r = read(file_from, buffer, 1024);
	}
	close_file(file_from);
	close_file(file_to);
	return (0);
}
