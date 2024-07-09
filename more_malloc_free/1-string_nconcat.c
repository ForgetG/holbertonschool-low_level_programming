#include "main.h"

/**
 * string_nconcat - concatenates two strings for n bytes of s2.
 * @s1: first string.
 * @s2: second string.
 * @n: first bytes of s2.
 * Return: pointer to allocated memory for concatenated string or NULL.
 */

char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int	index = 0, index_s1 = 0;
	char	*pointer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[index_s1] != '\0')
		index_s1++;
	pointer = malloc(sizeof(char) * (n + index_s1 + 1));
	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	for (index = 0; index < index_s1; index++)
		pointer[index] = s1[index];
	for (index = 0; index < n; index++)
		pointer[index_s1 + index] = s2[index];
	pointer[index_s1 + index] = '\0';
	return (pointer);
}
