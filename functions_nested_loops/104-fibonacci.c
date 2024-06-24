#include <stdio.h>
#include <stddef.h>

/**
 * main - print the first 98 Fibonacci numbers
 * Return:0
 */

int	main(void)
{
	size_t	number1 = 1, number2 = 2, number3;
	int	index = 3;

	printf("%lu, %lu", number1, number2);
	for (; index <= 98; index++)
	{
		number3 = number1 + number2;
		printf(", %lu", number3);
		number1 = number2;
		number2 = number3;
	}
	printf("\n");
	return (0);
}
