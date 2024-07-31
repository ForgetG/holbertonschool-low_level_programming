#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	_putchar(char c);
int	_strlen(char *s);
int	get_bit(unsigned long int n, unsigned int index);

unsigned int	binary_to_uint(const char *b);

void	print_binary(unsigned long int n);

#endif
