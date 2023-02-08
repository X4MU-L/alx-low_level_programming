#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>

#define BUFSIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

char *create_buffer(char *filename);
void close_FD(int fd);

#endif /* MAIN_H */
