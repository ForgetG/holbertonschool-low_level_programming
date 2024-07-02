#include <stdio.h>

/**
 * main - prints program name followed by a newline
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int	main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}
