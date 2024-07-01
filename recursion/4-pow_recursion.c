#include "main.h"

/**
 * _pow_recursion - returns the value of x
 * raised to the power of y.
 * @x: x value
 * @y: y power
 * Return: x
 */

int	_pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (x == 0 && y == 0)
		return (1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
