#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: sqrt or 0
 */

int	_sqrt_recursion(int n)
{
	int	nb2;
	int	sqrt;

	sqrt = 1;
	nb2 = sqrt * sqrt;
	if (n > 0)
	{
		while (sqrt <= 46341 && nb2 < n)
		{
			sqrt++;
			nb2 = sqrt * sqrt;
		}
		if (nb2 == n)
			return (sqrt);
	}
	return (-1);
}

