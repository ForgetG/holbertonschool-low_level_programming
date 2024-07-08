#include "main.h"

/**
 * _strdup - duplicate a string
 * @str: string to duplicate
 * Return: string_duplicate or NULL
 */

char	*_strdup(char *str)
{
	int	i, size = 0;
	char	*string_duplicate;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	string_duplicate = malloc(sizeof(char) * (size + 1));
	if (string_duplicate == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		string_duplicate[i] = str[i];
	}
	string_duplicate[i] = '\0';
	return (string_duplicate);
}
