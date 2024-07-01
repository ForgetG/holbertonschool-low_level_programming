#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to find
 * Return: 0 or pointer to first occurrence of c
 */

char	*_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (0);
}
