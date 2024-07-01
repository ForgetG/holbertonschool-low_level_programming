#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to string to fill
 * @b: constant byte
 * @n: first bytes of the memory area pointed by *s
 * Return: *s
 */

char	*_memset(char *s, char b, unsigned int n)
{
	while (n != 0)
	{
		s[n] = b;
		n--;
	}
	s[n] = b;
	return (s);
}
