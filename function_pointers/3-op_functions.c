#include "3-calc.h"

/**
 * op_add - calculate the sum of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: sum of a + b.
 */

int	op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: difference of a - b.
 */

int	op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: product of a * b.
 */

int	op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the result of the division of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: result of div of a / b or 100 if error.
 */

int	op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the rest of the division of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: rest of division of a by b or 100 if error.
 */

int	op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
