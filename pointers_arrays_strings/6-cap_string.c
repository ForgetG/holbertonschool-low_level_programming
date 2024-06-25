#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s : string
 * Return: s
 */

char	*cap_string(char *s)
{
	int	i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
	i++;
	while (s[i] != '\0')
	{
		if (s[i - 1] < '0' || (s[i - 1] > '9' && s[i - 1] < 'A') || s[i - 1] > 'z')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		i++;
	}
	return (s);
}
