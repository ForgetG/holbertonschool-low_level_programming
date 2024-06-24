#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to cut
 */

void	puts_half(char *str)
{
	int	i, n, length;

	length = _strlen(str);
	i = length / 2;
	n = (length - 1) / 2;

	if (length % 2 == 0)
	{
		for (; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		for (; str[n] != '\0'; n++)
			_putchar(str[n]);
	}
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
