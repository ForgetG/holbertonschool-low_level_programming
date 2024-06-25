#include "main.h"

/**
 * reverse_array - reverse content of array of integers
 * @a: array
 * @n: the number of elements to swap
 */

void	reverse_array(int *a, int n)
{
	int	start;
	int	end;
	int	buffer;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		buffer = a[start];
		a[start] = a[end];
		a[end] = buffer;
		start++;
		end--;
	}
}
