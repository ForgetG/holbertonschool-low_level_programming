#include "main.h"

/**
 * leet - encode a string to 1337
 * @s : string to encode
 * Return: string
 */

char	*leet(char *s)
{
	int	i = 0;
	int	j;
	char	l[8] = {'O', 'L', '9', 'E', 'A', '9', '9', 'T'};

	while (s[i] != '\0')
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == l[j] || s[i] - 32 == l[j])
				s[i] = j + '0';
		}
		i++;
	}
	return (s);
}
