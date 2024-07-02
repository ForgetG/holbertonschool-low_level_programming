#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int	main(int argc, char **argv)
{
	int	mul1 = 0, mul2 = 0, result = 0;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	mul1 = atoi(argv[1]);
	mul2 = atoi(argv[2]);
	result = mul1 * mul2;
	printf("%d\n", result);
	return (0);
}
