#include "main.h"

/**
 * flip_bits - Returns the numbers of bits you need to flip
 * To get from one number to another.
 * @n: First given number.
 * @m: Second given number.
 *
 * Return: Numbers of bits to flip (count).
 */

unsigned int	flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int	result = n ^ m;
	unsigned int	count = 0;

	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
