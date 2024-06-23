#include <stdio.h>

/**
 * main - compute & print the sum of ;ultiple of 3 & 5
 * Return: 0
 */

int	main(void)
{
	int	i = 0;
	int	result = 0;

	for (; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
	}
	printf("%d\n", result);
	return (0);
}
