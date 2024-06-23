#include <unistd.h>
/**
 * main - write a sentence
 * Return:FAILURE
 */

int	main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int	FAILURE = '0';

	write(2, message, 60);
	return (FAILURE);
}
