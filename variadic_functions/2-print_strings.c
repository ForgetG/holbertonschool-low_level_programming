#include "variadic_functions.h"

/**
 * print_strings - prints string passed as parameters of
 *		   the function followed by a newline.
 * @separator: string separator to be printed between strings.
 * @n: numbers of strings passed to the function.
 */

void	print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int	index;
	char	*string;

	va_start(ap, n);
	for (index = 0; index < n; index++)
	{
		string = va_arg(ap, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator && index < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
