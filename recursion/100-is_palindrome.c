#include "main.h"

/**
 * check_palindrome - check for palindrome
 * @s: string to check
 * @start: index start of string
 * @end: index end of string
 * Return: 0 not a palindrome or 1 is a palindrome
 */

int	check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - calculates length of string then call check_palindrome
 * @s: string to calculate
 * Return: is_palindrome
 */

int	is_palindrome(char *s)
{
	int	i = 0;


	if (s[i] == '\0')
		return (1);
	while (s[i] != '\0')
		i++;
	return (check_palindrome(s, 0, i - 1));
}
