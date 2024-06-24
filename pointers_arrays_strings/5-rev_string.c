#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */

void	rev_string(char *s)
{
	int	i, length, last_char;
	char	buffer;

	length = _strlen(s);
	for (i = 0; i < length / 2; i++)
	{
		last_char = length - i - 1;
		buffer = s[i];
		s[i] = s[last_char];
		s[last_char] = buffer;
	}
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
