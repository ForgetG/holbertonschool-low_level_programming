#include <stdio.h>

/**
 * main - print all combinations of single numbers
 * Return: 0
 */

int	main(void)
{
	int	i = '0';

	while (i < ':')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
