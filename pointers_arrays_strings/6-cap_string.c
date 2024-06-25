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
		if (s[i - 1] >= '\t' && s[i - 1] <= '\r')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		if (s[i - 1] >= ' ' && s[i - 1] <= '"')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		if (s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == ',')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		if (s[i - 1] == '.' || s[i - 1] == ';' || s[i - 1] == '?')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		if (s[i - 1] == '{' || s[i - 1] == '}')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		i++;
	}
	return (s);
}
