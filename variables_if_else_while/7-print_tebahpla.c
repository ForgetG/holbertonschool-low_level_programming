#include <stdio.h>

/**
 * main - print reverse alphabet + newline
 * Return: 0
 */

int	main(void)
{
	char	c;

	for (c = 'z'; c > 96 ; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
