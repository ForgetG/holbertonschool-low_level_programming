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
int	copy_file(const char *src_filename, const char *dest_filename);

int	copy_file_content(int src_fd, int dest_fd,
		const char *src_filename, const char *dest_filename);

ssize_t	read_textfile(const char *filename, size_t letters);

#endif
