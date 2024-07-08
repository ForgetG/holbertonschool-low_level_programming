#include "main.h"

/**
 * str_concat - concatenates two strings using malloc
 * @s1: first string
 * @s2: second string
 * Return: concatenated_string or NULL
 */

char	*str_concat(char *s1, char *s2)
{
	int	index_s1, index_s2, size_s1 = 0, size_s2 = 0;
	char	*concatenated_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size_s1] != '\0')
		size_s1++;
	while (s2[size_s2] != '\0')
		size_s2++;
	concatenated_string = malloc(sizeof(char) * (size_s1 + size_s2 + 1));
	if (concatenated_string == NULL)
		return (NULL);
	for (index_s1 = 0; index_s1 < size_s1; index_s1++)
		concatenated_string[index_s1] = s1[index_s1];
	for (index_s2 = 0; index_s2 < size_s2; index_s2++)
		concatenated_string[index_s1 + index_s2] = s2[index_s2];
	concatenated_string[index_s1 + index_s2] = '\0';
	return (concatenated_string);
}
