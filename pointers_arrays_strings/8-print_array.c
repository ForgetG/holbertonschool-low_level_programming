#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an array
 * @a: array
 * @n: n elements of array
 */

void	print_array(int *a, int n)
{
	int	i = 0;

	if (n > 1)
	{
		for (; i < n; i++)
		{
			if (i < n - 1)
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[i]);
		}
	}
	else
		printf("\n");
}
