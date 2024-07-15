#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters.
 * @n: number of parameters
 * Return: sum or 0 if argument count == NULL.
 */

int	sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int	index;
	int	sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (index = 0; index < n; index++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
