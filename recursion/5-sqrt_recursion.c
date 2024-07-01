#include "main.h"

/**
 * helper - calculate square root
 * @n : number
 * @sqrt: square root
 * Return: sqrt or -1
 */

int	helper(int n, int sqrt)
{
	if ((sqrt * sqrt) == n)
		return (sqrt);
	if (sqrt == n / 2)
		return (-1);
	return (helper(n, sqrt + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: sqrt or 0
 */

int	_sqrt_recursion(int n)
{
	int	sqrt = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (helper(n, sqrt));
}
