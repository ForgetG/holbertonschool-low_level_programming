#include <stdio.h>

/**
 * main - print the first 98 Fibonacci numbers
 * Return:0
 */

int	main(void)
{
	float	number1 = 1, number2 = 2, number3;
	int	index = 3;

	printf("%.0f, %.0f", number1, number2);
	for (; index < 99; index++)
	{
		number3 = number1 + number2;
		number1 = number2;
		number2 = number3;
		printf(", %.0f", number3);
	}
	printf("\n");
	return (0);
}
