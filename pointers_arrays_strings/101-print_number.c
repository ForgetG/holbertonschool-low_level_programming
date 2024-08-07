#include "main.h"

/**
 * print_number - prints an integer using putchar.
 * @n: given number.
 */

void	print_number(int n)
{
	unsigned int number;

	if (n == -2147483648)
	{
		_putchar('-');
		print_number(214748364);
		_putchar('8');
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			number = -n;
		}
		else
			number = n;
		if (number / 10)
			print_number(number / 10);
		_putchar((number % 10) + '0');
	}
}
