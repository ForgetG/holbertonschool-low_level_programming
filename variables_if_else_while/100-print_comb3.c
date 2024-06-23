#include <stdio.h>

/**
 * main - print_comb3
 * Return: 0
 */

int	main(void)
{
	int	tens = 0;
	int	units = 0;

	while (tens < 9)
	{
		units = tens + 1;
		while (units < 10)
		{
			putchar(tens + '0');
			putchar(units + '0');
			if (tens == 8 && units == 9)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
			units++;
		}
		tens++;
	}
	return (0);
}
