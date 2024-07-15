#include "variadic_functions.h"

/**
 * print_numbers - prints integers passed to the function.
 * @separator: string to be printed between numbers.
 * @n: numbers of integers passed to the function.
 */

void	print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list	ap;
	unsigned int	index;
	int	number;

	va_start(ap, n);
	for (index = 0; index < n; index++)
	{
		number = va_arg(ap, int);
		printf("%d", number);
		if (separator && index < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
