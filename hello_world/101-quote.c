#include <unistd.h>
/**
 * main - write a sentence
 * Return:FAILURE
 */

int	main(void)
{
	int	FAILURE = '0';

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (FAILURE);
}
