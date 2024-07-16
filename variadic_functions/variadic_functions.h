#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct format_specifier - struct to map specifiers to functions.
 * @specifier: format specifier character.
 * @print_func: pointer to the function that handles printing for specifier.
 * Despcription: associate format specifiers with corresponding print function.
 */

typedef struct format_specifier
{
	char specifier;
	void (*print_func)(va_list ap);
} format_specifier_t;

int	sum_them_all(const unsigned int n, ...);
void	print_numbers(const char *separator, const unsigned int n, ...);
void	print_strings(const char *separator, const unsigned int n, ...);
void	print_all(const char * const format, ...);
void	print_char(va_list ap);
void	print_int(va_list ap);
void	print_float(va_list ap);
void	print_string(va_list ap);

#endif
