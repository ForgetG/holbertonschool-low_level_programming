#include <stdio.h>

/**
 * main - print even numbers < 4000000 of the Fibonacci suite.
 * Return: 0
 */

int	main(void)
{
	unsigned long int	number1 = 1;
	unsigned long int	number2 = 2;
	unsigned long int	number3;
	int	index = 3, sum = 2;

	for (;; index++)
	{
		number3 = number1 + number2;
		number1 = number2;
		number2 = number3;
		if (number3 > 4000000)
			break;
		else if (number3 % 2 == 0)
			sum += number3;
	}
	printf("%d\n", sum);
	return (0);
}
