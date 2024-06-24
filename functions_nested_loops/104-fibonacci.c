#include <stdio.h>

/**
 * main - print the first 98 Fibonacci numbers
 * Return:0
 */

int	main(void)
{
	unsigned int	number1 = 1, number2 = 2, number3;
	int	index = 3;

	printf("%u, %u", number1, number2);
	for (; index <= 98; index++)
	{
		number3 = number1 + number2;
		printf(", %u", number3);
		number1 = number2;
		number2 = number3;
	}
	printf("\n");
	return (0);
}
