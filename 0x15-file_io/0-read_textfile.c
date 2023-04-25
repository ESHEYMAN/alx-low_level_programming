#include "main.h"
/**
 * read_text_file - A function that reads a text file
 * and prints it to the POSIX standard output
 * @letters: number of letters it should read
 * @filename: name of the file
 * Return: filename NULL, Write fails, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters);
{
int cd;
ssize_t nre;
ssize_t nwr;
char *buffer;

if (filename == NULL)
return (0);

cd = open(filename, O_RDONLY);
if (cd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

nre = read(cd, buffer, letters);
nwr = write(STDOUT_FILENO, buffer, nre);

free(buffer);
close(cd);
return (nwr);
}
