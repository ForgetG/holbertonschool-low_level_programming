#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of lines
 */

void	print_diagonal(int n)
{
	int	i;
	int	j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			if (i == n)
				break;
			for (j = 0; j < i; j++)
				_putchar(' ');
		}
	}
}
