#include <stdio.h>

/**
 * main - print the first 50 Fibonacci numbers.
 * Return: 0
 */

int	main(void)
{
	unsigned long int	number1 = 1;
	unsigned long int	number2 = 2;
	unsigned long int	number3;
	int	index;

	printf("%ld, %ld, ", number1, number2);
	for (index = 3; index <= 50; index++)
	{
		number3 = number1 + number2;
		number1 = number2;
		number2 = number3;
		printf("%ld", number3);
		if (index < 50)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
