#include "main.h"

/**
 * helper - calculate square root
 * @n : number
 * @min: minimum possible square root
 * @max: maximum square root
 * Return: sqrt or -1
 */

int	helper(int n, int min, int max)
{
	int	sqrt;

	if (max < min)
		return (-1);
	sqrt = (min + max) / 2;
	if (sqrt * sqrt == n)
		return (sqrt);
	else if (sqrt * sqrt < n)
		return (helper(n, sqrt + 1, max));
	else
		return (helper(n, min, sqrt - 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: sqrt or 0
 */

int	_sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 1, n));
}
