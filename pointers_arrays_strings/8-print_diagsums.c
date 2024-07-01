#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array
 * @size: size of array
 */

void	print_diagsums(int *a, int size)
{
	int	i;
	int	diag_left_to_right = 0;
	int	diag_right_to_left = 0;

	for (i = 0; i < size; i++)
	{
		diag_left_to_right += a[i * size + i];
		diag_right_to_left += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", diag_left_to_right, diag_right_to_left);
}
