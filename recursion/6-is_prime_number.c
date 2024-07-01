#include "main.h"

/**
 * divisor - check if number is divisible
 * @n: number to check
 * @i: divisor
 * Return: 0 or 1
 */

int	divisor(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (divisor(n, i + 1));
}

/**
 * is_prime_number - check for prime number
 * @n: number to check
 * Return: 0 or 1
 */

int	is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (divisor(n, 2));
}
