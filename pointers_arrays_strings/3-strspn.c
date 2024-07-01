#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string to test
 * @accept: characters allowed
 * Return: number of bytes of inital segment of s,
 * consist only of bytes form accept
 */

unsigned int	_strspn(char *s, char *accept)
{
	int	array[256] = {0};
	int	i = 0;

	while (accept[i])
	{
		array[(int)accept[i]] = 1;
		i++;
	}
	i = 0;
	while (s[i] && array[(int)s[i]])
		i++;
	return (i);
}
