#include <stdio.h>

/**
  * main - print combination of 3 digits.
  * Return: 0
  */

int	main(void)
{
	int	hundreds;
	int	tens;
	int	units;

	hundreds = '0';
	tens = '0';
	units = '0';
	while (hundreds < '8')
	{
		tens = hundreds + 1;
		while (tens < '9')
		{
			units = tens + 1;
			while (units <= '9')
			{
				putchar(hundreds);
				putchar(tens);
				putchar(units);
				if (hundreds == '7' && tens == '8' && units == '9')
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
		hundreds++;
	}
	return (0);
}
