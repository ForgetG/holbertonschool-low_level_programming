#include "main.h"

/**
 * read_and_write - Reads from src_fd and writes to dest_fd.
 * @src_fd: The source file descriptor.
 * @dest_fd: The destination file descriptor.
 * @buffer: The buffer to use for reading and writing.
 *
 * Return: On success: 1.
 * On failure: -1.
 */
int read_and_write(int src_fd, int dest_fd, char *buffer)
{
	int n_read, n_written;

	while ((n_read = read(src_fd, buffer, 1024)) > 0)
	{
		n_written = write(dest_fd, buffer, n_read);
		if (n_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			return (-1);
		}
	}
	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		return (-1);
	}
	return (1);
}

/**
 * copy_file_content - Copies the content from one file descriptor to another.
 * @src_fd: The source file descriptor.
 * @dest_fd: The destination file descriptor.
 *
 * Return: On success: 1.
 * On failure: -1.
 */
int copy_file_content(int src_fd, int dest_fd)
{
	char *buffer = malloc(1024);
	int result;

	if (buffer == NULL)
		return (-1);

	result = read_and_write(src_fd, dest_fd, buffer);
	free(buffer);
	return (result);
}

/**
 * copy_file - Copies the content of one file to another.
 * @src_filename: The source file.
 * @dest_filename: The destination file.
 *
 * Return: On success: 1.
 * On failure: -1.
 */
int copy_file(const char *src_filename, const char *dest_filename)
{
	int src_fd, dest_fd;
	int result;

	if (src_filename == NULL || dest_filename == NULL)
		return (-1);

	src_fd = open(src_filename, O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_filename);
		return (-1);
	}

	dest_fd = open(dest_filename, O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_filename);
		close(src_fd);
		return (-1);
	}

	result = copy_file_content(src_fd, dest_fd);

	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		result = -1;
	}

	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		result = -1;
	}

	return (result);
}

/**
 * main - Entry point for the program.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: On success: 0.
 * On failure: Corresponding error code.
 */
int main(int argc, char **argv)
{
	umask(0002);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (copy_file(argv[1], argv[2]) == -1)
	{
		exit(1);
	}

	return (0);
}
