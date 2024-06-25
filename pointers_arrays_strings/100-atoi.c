#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string to convert
 * Return: nbr * sign or 0
 */

int	_atoi(char *s)
{
	int	nbr;
	int	sign;
	int	i;

	nbr = 0;
	sign = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= '\t' && s[i] <= '\r') || s[i] == ' ')
		{
			i++;
		}
		if (s[i] == '-' || s[i] == '+')
		{
			if (s[i] == '-')
				sign = sign * (-1);
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			nbr = nbr * 10 + (s[i] - '0');
			i++;
			if (s[i] < '0' || s[i] > '9')
				break;
		}
		else
			i++;
	}
	return (nbr * sign);
}
