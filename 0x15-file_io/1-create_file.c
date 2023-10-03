#include "main.h"
/**
 * create_file - function that create file
 * @filename: name of the file to create
 * @text_content: null terminated str to write to thr file
 * Return: On success 1, if failed -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_len = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[text_len] != '\0')
			text_len++;
		bytes_written = write(fd, text_content, text_len);
		if (bytes_written == -1 || bytes_written != text_len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
