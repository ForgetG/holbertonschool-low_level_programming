#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

int	_putchar(char c);
int	_strlen(char *s);
int	_atoi(char *s);

char	*_strcpy(char *dest, char *src);
char	*_strcat(char *dest, char *src);
char	*_strncat(char *dest, char *src, int n);

void	reset_to_98(int	*n);
void	swap_int(int *a, int *b);
void	_puts(char *str);
void	print_rev(char *s);
void	rev_string(char *s);
void	puts2(char *str);
void	puts_half(char *str);
void	print_array(int *a, int n);

#endif
