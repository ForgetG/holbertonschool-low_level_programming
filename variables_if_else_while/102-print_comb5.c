#include <stdio.h>

/**
 * main - print combination of 2 two-digit numbers.
 * Return: 0
 */

int	main(void)
{
	int	nbr1;
	int	nbr2;
	int	nbr3;
	int	nbr4;

	nbr1 = '0';
	nbr2 = '0';
	nbr3 = '0';
	nbr4 = '1';
	while (nbr1 <= '9')
	{
		nbr2 = '0';
		while (nbr2 <= '8')
		{
			nbr3 = nbr1;
			while (nbr3 <= '9')
			{
				nbr4 = nbr2 + 1;
				while (nbr4 <= '9')
				{
					putchar(nbr1);
					putchar(nbr2);
					putchar(' ');
					putchar(nbr3);
					putchar(nbr4);
					if (nbr1 == '9' && nbr2 == '8' && nbr3 == '9' && nbr4 == '9')
						putchar('\n');
					else
					{
						putchar(',');
						putchar(' ');
					}
					nbr4++;
				}
				nbr3++;
			}
			nbr2++;
		}
		nbr1++;
	}
	return (0);
}
