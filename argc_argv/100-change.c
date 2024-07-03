#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1 if ERROR
 */

int	main(int argc, char **argv)
{
	int	number = 0;
	int	sum = 0;
	int	index = 0;
	int	coins[5] = {25, 10, 5, 2, 1};


	if (argc != 2)
	{
		printf("ERROR\n");
		return (1);
	}
	for (; argv[1][index] != '\0'; index++)
	{
		if (argv[1][index] < '0' || argv[1][index] > '9')
		{
			printf("ERROR\n");
			return (0);
		}
	}
	number = atoi(argv[1]);
	if (number < 0)
	{
		printf("0\n");
		return (0);
	}
	for (index = 0; index < 5; index++)
	{
		sum += number / coins[index];
		number %= coins[index];
	}
	printf("%d\n", sum);
	return (0);
}
