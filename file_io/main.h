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

void	file_error(int src_fd, int dest_fd, char *argv[]);

ssize_t	read_textfile(const char *filename, size_t letters);

#endif
