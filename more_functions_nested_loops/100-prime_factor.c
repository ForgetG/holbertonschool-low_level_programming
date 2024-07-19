#include <stdio.h>

/**
 * max_prime_factors - finds and returns the max prime factor of
 * given number.
 * @n: given number.
 * Return: max prime factor.
 */

long	max_prime_factors(long n)
{
	long max_prime = -1;
	int	i = 0;

	while (n % 2 == 0)
	{
		max_prime = 2;
		n /= 2;
	}
	while (n % 3 == 0)
	{
		max_prime = 3;
		n /= 3;
	}
	for (i = 5; i * i <= n; i += 6)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n /= i;
		}
		while (n % (i + 2) == 0)
		{
			max_prime = i + 2;
			n /= (i + 2);
		}
	}
	if (n > 4)
		max_prime = n;
	return (max_prime);
}

/**
 * main - prints the result of max_prime_factors function with
 * number as argument.
 * Return: 0
 */

int	main(void)
{
	long	number = 612852475143;

	printf("%ld\n", max_prime_factors(number));
	return (0);
}
