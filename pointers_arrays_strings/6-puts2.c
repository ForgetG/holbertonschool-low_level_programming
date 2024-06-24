#include "main.h"

/**
 * puts2 - prints 1/2 characters of string
 * @str: string
 */

void	puts2(char *str)
{
	int	i, length;

	length = _strlen(str);

	for (i = 0; i < length; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

/**
 * _strlen - return length of a string
 * @s: string
 * Return: length
 */

int	_strlen(char *s)
{
	int	length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
