#include <stdio.h>

/**
 * main - print alphabet except 'e' & 'q'
 * Return: 0
 */

int	main(void)
{
	int	c = 'a';

	while (c < '{')
	{
		if (c  == 'e')
			c++;
		if (c == 'q')
			c++;
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
