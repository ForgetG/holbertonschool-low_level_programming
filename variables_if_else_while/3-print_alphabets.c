#include <stdio.h>

/**
 * main - print alphabet lowercase + uppercase
 * + newline
 * Return: 0
 */

int	main(void)
{
	int	c = 0;

	for (c = 'a'; c < '{'; c++)
		putchar(c);
	for (c = 'A'; c < '['; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
