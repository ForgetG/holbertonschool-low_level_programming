#include <stdio.h>

/**
 * _atoi - converts char to integer
 * @str: string to convert
 * Return: result
 */

int	_atoi(char *str)
{
	int	result = 0;
	int	sign = 1;
	int	start = 0;
	int	i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		start = 1;
	}
	for (i = start; str[i] != '\0'; ++i)
		result = result * 10 + str[i] - '0';
	return (result * sign);
}

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
	mul1 = _atoi(argv[1]);
	mul2 = _atoi(argv[2]);
	result = mul1 * mul2;
	printf("%d\n", result);
	return (0);
}
