#include "main.h"

/**
  * _isdigit - checks for a digit
  * @c: integer to check
  * Return: 1 if digit else 0
  */

int	_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
