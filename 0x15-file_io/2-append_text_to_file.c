#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file
 * @text_content: text to append at the end of the file
 * Return: On Success (1), failed (-1)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_len = 0;
	ssize_t bytes_written;

	fd = open(filename, O_WRONLY | O_APPEND);
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
