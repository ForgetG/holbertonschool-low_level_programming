#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: On success: 1.
 * On failure: -1.
 */

int	create_file(const char *filename, char *text_content)
{
	int	fd;
	ssize_t	n_written;
	int length = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
		n_written = write(fd, text_content, length);
		if (n_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
