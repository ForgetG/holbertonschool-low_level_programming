#include "main.h"

/**
 * copy_file_content - Copies the content from one file descriptor to another.
 * @src_fd: The source file descriptor.
 * @dest_fd: The destination file descriptor.
 * @src_filename: The source file name.
 * @dest_filename: The destination file name.
 */

void	copy_file_content(int src_fd, int dest_fd,
		const char *src_filename, const char *dest_filename)
{
	int	n_read, n_written;
	char	buffer[1024];

	while ((n_read = read(src_fd, buffer, 1024)) > 0)
	{
		n_written = write(dest_fd, buffer, n_read);
		if (n_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_filename);
			close(src_fd);
			close(dest_fd);
			exit(99);
		}
	}
	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_filename);
		close(src_fd);
		close(dest_fd);
		exit(98);
	}
}

/**
 * copy_file - Copies the content of one file to another.
 * @src_filename: The source file.
 * @dest_filename: The destination file.
 *
 * Return: On success: 1.
 * On failure: -1.
 */

int	copy_file(const char *src_filename, const char *dest_filename)
{
	int	src_fd, dest_fd;

	if (src_filename == NULL || dest_filename == NULL)
		return (-1);
	src_fd = open(src_filename, O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_filename);
		exit(98);
	}
	dest_fd = open(dest_filename, O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_filename);
		close(src_fd);
		exit(99);
	}
	copy_file_content(src_fd, dest_fd, src_filename, dest_filename);
	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}
	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
	return (1);
}

/**
 * main - Entry point for the program.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: On success: 0.
 * On failure: Corresponding error code.
 */

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (copy_file(argv[1], argv[2]) == -1)
		exit(1);
	return (0);
}
