#include <stdio.h>

/**
 * main - prints the number of argument passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int	main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
