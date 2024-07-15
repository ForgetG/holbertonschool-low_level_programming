#include "function_pointers.h"

/**
 * int_index - functions that searches for an integer.
 * @array: array of integers.
 * @size: size of array.
 * @cmp: function to compare values.
 * Return: index of the first element for which cmp function
 * does not return 0 else -1.
 */

int	int_index(int *array, int size, int (*cmp)(int))
{
	int	index;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]))
				return (index);
		}
	}
	return (-1);
}
