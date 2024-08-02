#include "main.h"

/**
 * handle_error - Handles errors by printing the error message and exiting.
 * @exit_code: The exit code.
 * @message: The error message.
 * @argv: The argument associated with error.
 */

void	handle_error(int exit_code, const char *message, const char argv[])
{
	dprintf(STDERR_FILENO, message, argv);
	exit(exit_code);
}

/**
 * close_file - Close a given filed.
 * @fd: given file
 */

void	close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point for the program.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: On success: 0.
 * On failure: Corresponding error code.
 */

int	main(int argc, char *argv[])
{
	int	src_fd, dest_fd, n_read, n_written;
	char	buffer[1024];

	umask(0002);
	if (argc != 3)
		handle_error(97, "Usage: cp file_from file_to\n", NULL);
	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
		handle_error(98, "Error, can't read from file %s\n", argv[1]);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest_fd == -1)
	{
		close(src_fd);
		handle_error(99, "Error: Can't write to %s\n", argv[2]);
	}
	while ((n_read = read(src_fd, buffer, 1024)) > 0)
	{
		n_written = write(dest_fd, buffer, n_read);
		if (n_written == -1)
		{
			close(src_fd);
			close(dest_fd);
			handle_error(99, "Error: Can't write from file %s\n", argv[2]);
		}
	}
	if (n_read == -1)
	{
		close(src_fd);
		close(dest_fd);
		handle_error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	close_file(src_fd);
	close_file(dest_fd);
	return (0);
}
