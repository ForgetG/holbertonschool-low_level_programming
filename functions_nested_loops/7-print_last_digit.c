#include "main.h"

/**
 * print_last_digit - prints last digit of a number.
 * @n: number
 * Return: last_digit
 */

int	print_last_digit(int n)
{
	int	last_digit = 0;

	if (n < 0)
		n = n * -1;
	last_digit = n % 10;
	return (last_digit);
}
