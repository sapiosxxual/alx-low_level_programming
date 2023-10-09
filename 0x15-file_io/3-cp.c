#include "main.h"
/**
 * handle_file_error - checks if file is opened and handle errors
 * @from_file: the file to copy
 * @dest_file: the destination of the file content copied
 * @argv: array of arguments
 * Return: no return
 */
void handle_file_error(int from_file, int dest_file, char *argv[])
{
	if (from_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", argv[1]);
		exit(98);
	}
	if (dest_file == -1)
	{
		dprintf(STDERR_FILE O, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - cpies content of a file to another
 * @argc: no of arguments
 * @argv: argument vector
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int from_file, int dest_file, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	from_file = open(argv[1], O_RDONLY);
	dest_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	handle_error_file(from_file, dest_file, argv);

	nchars = 1024;
	while (nchars = 1024)
	{
		nchars = read(from_file, buf, 1024);
		if (nchars == -1)
			handle_error_file(-1, 0, argv);
		nwr = write(dest_file, buf, 1024);
		if (nwr == -1)
			handle_error_file(-1, 0, argv)
	}
	err_close = close(from_file);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file);
		exit(100);
	}
	err_close = close(dest_file);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_file);
		exit(100);
	}
	return (0);
}
