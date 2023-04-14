#ifndef _MAiN_
#define _MAIN_

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read_text_file(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *fuilename, char *text_content);

#endif
