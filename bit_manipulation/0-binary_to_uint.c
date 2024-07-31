#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: String containing the binary number to convert.
 *
 * Return: The converted number on success.
 * 0 if there is one or more chars in the string that is not 0 or 1.
 * 0 if the string is NULL.
 */

unsigned int	binary_to_uint(const char *b)
{
	unsigned int	decimal = 0;
	int	i = 0, length = 0;

	if (b == NULL)
		return (0);
	while (b[length] != '\0')
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		length++;
	}
	for (; i < length; i++)
	{
		decimal = decimal << 1;
		if (b[i] == '1')
		{
			decimal = decimal | 1;
		}
	}
	return (decimal);
}
