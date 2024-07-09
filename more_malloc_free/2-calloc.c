#include "main.h"

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements in array.
 * @size: size (bytes) of nmemb.
 * Return: pointer or NULL.
 */

void	*_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int	index = 0;
	char	*pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);

	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	for (; index < nmemb * size; index++)
		pointer[index] = 0;
	return (pointer);
}
