#include "main.h"

/**
 * print_times_table - print the n times table.
 * @n: number
 * Return: null
 */

void	print_times_table(int n)
{
	int	i, j, result;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			result = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result >= 10 && result < 100)
			{
				if (j != 0)
					_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (result >= 100)
			{
				_putchar((result / 100) + '0');
				_putchar(((result / 10) %10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (result < 10 && j == 0)
			{
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
