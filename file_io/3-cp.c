#include "main.h"

/**
 * handle_error - Handles errors by printing a message and exiting.
 * @message: The error message to print.
 * @exit_code: The exit code to use.
 * @fd1: The first file descriptor to close (if any).
 * @fd2: The second file descriptor to close (if any).
 */
void handle_error(const char *message, int exit_code, int fd1, int fd2)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	if (fd1 != -1)
		close(fd1);
	if (fd2 != -1)
		close(fd2);
	exit(exit_code);
}

/**
 * main - Program that copies the content of a file to another file.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int src_fd, dest_fd, n_read, n_written;
	char buffer[1024];

	umask(0002);
	if (argc != 3)
		handle_error("Usage: cp file_from file_to", 97, -1, -1);

	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
		handle_error("Can't read from file", 98, -1, -1);

	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest_fd == -1)
		handle_error("Can't write to file", 99, src_fd, -1);

	while ((n_read = read(src_fd, buffer, 1024)) > 0)
	{
		n_written = write(dest_fd, buffer, n_read);
		if (n_written == -1)
			handle_error("Can't write to file", 99, src_fd, dest_fd);
	}
	if (n_read == -1)
		handle_error("Can't read from file", 98, src_fd, dest_fd);

	if (close(src_fd) == -1)
		handle_error("Can't close file descriptor", 100, -1, dest_fd);

	if (close(dest_fd) == -1)
		handle_error("Can't close file descriptor", 100, -1, -1);

	return (0);
}
