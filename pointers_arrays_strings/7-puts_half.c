#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to cut
 */

void	puts_half(char *str)
{
	int	i, length;

	length = _strlen(str);

	if (length % 2 == 0)
		i = length / 2;
	else
		i = (length + 1) / 2;
	for (; i < length; i++)
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
