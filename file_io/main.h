#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>

int	_putchar(char c);
int	create_file(const char *filename, char *text_content);
int	append_text_to_file(const char *filename, char *text_content);

void handle_error(const char *message, int exit_code, int fd1, int fd2);

ssize_t	read_textfile(const char *filename, size_t letters);

#endif
