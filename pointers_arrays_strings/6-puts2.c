#include "main.h"

/**
 * puts2 - prints 1/2 characters of string
 * @str: string
 */

void	puts2(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		i++;
	}
	_putchar('\n');
}
