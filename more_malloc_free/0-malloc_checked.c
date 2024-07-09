#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory to allocate.
 * Return: pointer to allocated memory or exit(98).
 */

void	*malloc_checked(unsigned int b)
{
	void	*pointer = malloc(b);

	if (pointer == NULL)
	{
		free(pointer);
		exit(98);
	}
	return (pointer);
}
