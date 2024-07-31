#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Given bit in decimal.
 * @index: Given index.
 *
 * Return: The value of the bit at index.
 * On error: Returns -1.
 */

int	get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
