#include "main.h"

/**
 * _strncat - concatenate 2 strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from source
 * Return: dest
 */

char	*_strncat(char *dest, char *src, int n)
{
	{
	char	*ptr;
	int	i;

	ptr = dest;
	i = 0;
	while (*ptr != '\0')
		ptr++;
	while (*src != '\0' && i < n)
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}
}
