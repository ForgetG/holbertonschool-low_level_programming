#include <stdio.h>

/**
 * main - print alphabet lowercase + uppercase
 * + newline
 * Return: 0
 */

int	main(void)
{
	int	c = 0;

	for (c = 'a'; c < 'z'; c++)
		putchar(c);
	for (c = 'A'; c < 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
