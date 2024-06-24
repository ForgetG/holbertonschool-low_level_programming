#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 */

void	swap_int(int *a, int *b)
{
	int	buffer = 0;

	buffer = *a;
	*a = *b;
	*b = buffer;
}
