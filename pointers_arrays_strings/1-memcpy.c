#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @n: n bytes to copy
 * Return: dest
 */

char	*_memcpy(char *dest, char *src, unsigned int n)
{
	while (n != 0)
	{
		dest[n] = src[n];
		n--;
	}
	return (dest);
}
